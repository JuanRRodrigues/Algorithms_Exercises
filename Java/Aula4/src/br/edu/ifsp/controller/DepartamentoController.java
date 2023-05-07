package br.edu.ifsp.controller;

import java.util.ArrayList;
import java.util.List;

import br.edu.ifsp.dao.DepartamentoDao;
import br.edu.ifsp.model.departamento.Departamento;
import br.edu.ifsp.model.departamento.DepartamentoValidacao;
import br.edu.ifsp.model.funcionario.Funcionario;

public class DepartamentoController {
	private Departamento departamento;
	private List<String> erros;

    public List<String> insereDepartamento(String nomeDepto, Funcionario funcionario) {
    	recebeDadosDepartamento(null, nomeDepto, funcionario);
    	
		// Se nenhum erro de valida��o for encontrado, tenta inserir o funcion�rio no banco.
		if (erros.size() == 0)
			erros.add(new DepartamentoDao().insereDepartamento(departamento));
		
		// Retorna o ArrayList contendo:
		// - Em caso de sucesso: null na 1� posi��o; OU
		// - Em caso de exce��o: uma mensagem de exce��o na 1� posi��o; OU
		// - Em caso de erro de valida��o: mensagens de erro iniciando na 1� posi��o.
		return erros; 
    }
    
    // M�todo usado pelas opera��es de inser��o e altera��o de funcion�rio.
    public void recebeDadosDepartamento(Integer id, String nomeDepto, Funcionario funcionario) {
    	departamento = new Departamento();
    	erros = new ArrayList<String>();

		// Os m�todos set abaixo criam um objeto Funcionario contendo os dados do funcion�rio informado.
		// Este objeto ser� enviado � classe DAO, que far� a inser��o de seus dados no banco.
    	departamento.setId(id);
    	departamento.setNomeDepto(nomeDepto);
		funcionario.setId(id);
        
		// Retorna um ArrayList contendo os erros encontrados em regras de valida��o e de neg�cios.
		erros = DepartamentoValidacao.validaDepartamento(departamento);
    }
    
    public List<Funcionario> recuperaFuncionarios() {
    	// Recupera os cargos cadastrados no banco de dados para que sejam exibidos no campo Cargo.
		return new DepartamentoDao().recuperaFuncionario();
    }
    
    public String getExcecao() {
    	// Retorna a exce��o lan�ada ao recuperar os cargos (ao abrir a interface "Cadastro de Funcion�rio").
    	return new DepartamentoDao().getExcecao();
    }
}
