package br.edu.ifsp.view.funcionario;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

import br.edu.ifsp.controller.DepartamentoController;
import br.edu.ifsp.model.funcionario.Funcionario;

public class DepartamentoCadastro {
	static Scanner entrada = new Scanner(System.in);
	
	public static void exibeInterface() {
		String nomeDepto;

		System.out.println("\nCADASTRO DE DEPARTAMENTO:");
		System.out.print("NOME: ");
		nomeDepto = entrada.nextLine();
		System.out.print("ID DO GERENTE: ");

		List<String> erros = new ArrayList<String>();
		
		// Envia os dados do funcion�rio (informados no formul�rio) ao controller. 
		// O controller retorna ent�o um ArrayList contendo os erros encontrados.
		erros = new DepartamentoController().insereDepartamento(nomeDepto,
												              leFuncionario());
		
		if (erros.get(0) == null) { // Se o primeiro elemento do ArrayList for null.
			System.out.println("Funcion�rio cadastrado com sucesso.\n");
		} else { // Se o primeiro elemento do ArrayList n�o for null.
			String mensagem = "N�o foi poss�vel cadastrar o funcion�rio:\n";
			for (String e : erros) // Cria uma mensagem contendo todos os erros armazenados no ArrayList.
				mensagem = mensagem + e + "\n";
			System.out.println(mensagem);
		}
	}
	
	public static Funcionario leFuncionario() {
		int codFuncionario;
		Funcionario funcionario = new Funcionario();
		
		List<Funcionario> funcionarios = new ArrayList<Funcionario>();
		// Retorna um ArrayList de objetos Cargo, contendo o Id e a Descri��o dos cargos cadastrados.
		funcionarios = new DepartamentoController().recuperaFuncionarios();		
		String erro = new DepartamentoController().getExcecao();
		if (erro != null) // Caso ocorra qualquer tipo de exce��o.
			System.out.println("N�o foi poss�vel recuperar os dados dos cargos:\n" + erro);
		
		if (funcionarios.size() != 0) { // Se existir pelo menos um cargo cadastrado.
			System.out.println("Funcionarios CADASTRADOS: ");
			for (Funcionario f : funcionarios)
				System.out.println(f.getId() + " - " + f.getNome());
			
			System.out.print("Digite o ID do gerente: ");
			codFuncionario = Integer.parseInt(entrada.nextLine());
			for (Funcionario f : funcionarios)
				if (f.getId() == codFuncionario)
					funcionario = f;
		}
		return funcionario;
	}
}


