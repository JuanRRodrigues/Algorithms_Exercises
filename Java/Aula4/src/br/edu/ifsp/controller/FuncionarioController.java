package br.edu.ifsp.controller;

import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.List;

import br.edu.ifsp.dao.FuncionarioDao;
import br.edu.ifsp.model.cargo.Cargo;
import br.edu.ifsp.model.funcionario.Funcionario;
import br.edu.ifsp.model.funcionario.FuncionarioValidacao;

public class FuncionarioController {
	private Funcionario funcionario;
	private List<String> erros;

    public List<String> insereFuncionario(String nome, Character sexo, BigDecimal salario, Boolean planoSaude, Cargo cargo) {
    	recebeDadosFuncionario(null, nome, sexo, salario, planoSaude, cargo);
    	
		// Se nenhum erro de validação for encontrado, tenta inserir o funcionário no banco.
		if (erros.size() == 0)
			erros.add(new FuncionarioDao().insereFuncionario(funcionario));
		
		// Retorna o ArrayList contendo:
		// - Em caso de sucesso: null na 1ª posição; OU
		// - Em caso de exceção: uma mensagem de exceção na 1ª posição; OU
		// - Em caso de erro de validação: mensagens de erro iniciando na 1ª posição.
		return erros; 
    }
    
    // Método usado pelas operações de inserção e alteração de funcionário.
    public void recebeDadosFuncionario(Integer id, String nome, Character sexo, BigDecimal salario, Boolean planoSaude, Cargo cargo) {
    	funcionario = new Funcionario();
    	erros = new ArrayList<String>();

		// Os métodos set abaixo criam um objeto Funcionario contendo os dados do funcionário informado.
		// Este objeto será enviado à classe DAO, que fará a inserção de seus dados no banco.
    	funcionario.setId(id);
    	funcionario.setNome(nome);
		funcionario.setSexo(sexo);
		funcionario.setSalario(salario);
		funcionario.setPlanoSaude(planoSaude);
		funcionario.setCargo(cargo);
        
		// Retorna um ArrayList contendo os erros encontrados em regras de validação e de negócios.
		erros = FuncionarioValidacao.validaFuncionario(funcionario);
    }
    
    public List<Cargo> recuperaCargos() {
    	// Recupera os cargos cadastrados no banco de dados para que sejam exibidos no campo Cargo.
		return new FuncionarioDao().recuperaCargos();
    }
    
    public String getExcecao() {
    	// Retorna a exceção lançada ao recuperar os cargos (ao abrir a interface "Cadastro de Funcionário").
    	return new FuncionarioDao().getExcecao();
    }
}

