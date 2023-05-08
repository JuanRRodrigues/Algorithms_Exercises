package br.edu.ifsp.controller;

import java.util.ArrayList;
import java.util.List;

import br.edu.ifsp.dao.CargoDao;
import br.edu.ifsp.model.cargo.Cargo;
import br.edu.ifsp.model.cargo.CargoValidacao;
import br.edu.ifsp.model.departamento.Departamento;

public class CargoController {
	private Cargo cargo;
	private List<String> erros;

    public List<String> insereCargo(String Descricao, Departamento departamento) {
    	recebeDadosCargo(null, Descricao, departamento);
    	
		// Se nenhum erro de valida��o for encontrado, tenta inserir o funcion�rio no banco.
		if (erros.size() == 0)
			erros.add(new CargoDao().insereCargo(cargo));
		
		// Retorna o ArrayList contendo:
		// - Em caso de sucesso: null na 1� posi��o; OU
		// - Em caso de exce��o: uma mensagem de exce��o na 1� posi��o; OU
		// - Em caso de erro de valida��o: mensagens de erro iniciando na 1� posi��o.
		return erros; 
    }
    
    // M�todo usado pelas opera��es de inser��o e altera��o de funcion�rio.
    public void recebeDadosCargo(Integer Id, String Descricao, Departamento departamento) {
    	cargo = new Cargo();
    	erros = new ArrayList<String>();

		// Os m�todos set abaixo criam um objeto Funcionario contendo os dados do funcion�rio informado.
		// Este objeto ser� enviado � classe DAO, que far� a inser��o de seus dados no banco.
    	cargo.setId(Id);
    	cargo.setDescricao(Descricao);
		cargo.setDepartamento(departamento);
		
        
		// Retorna um ArrayList contendo os erros encontrados em regras de valida��o e de neg�cios.
		erros = CargoValidacao.validaCargo(cargo);
    }
    
    public List<Departamento> recuperaDepartamento() {
    	// Recupera os cargos cadastrados no banco de dados para que sejam exibidos no campo Cargo.
		return new CargoDao().recuperaDepartamento();
    }
    
    public String getExcecao() {
    	// Retorna a exce��o lan�ada ao recuperar os cargos (ao abrir a interface "Cadastro de Funcion�rio").
    	return new CargoDao().getExcecao();
    }
}
