package br.edu.ifsp.view.funcionario;

import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

import br.edu.ifsp.controller.FuncionarioController;
import br.edu.ifsp.model.cargo.Cargo;

public class FuncionarioCadastro {
	static Scanner entrada = new Scanner(System.in);
	
	public static void exibeInterface() {
		String nome;
		Character sexo = null;
		BigDecimal salario = null;
		boolean planoSaude;

		System.out.println("\nCADASTRO DE FUNCIONÁRIO:");
		System.out.print("NOME: ");
		nome = entrada.nextLine();
		System.out.print("SEXO (Digite 'm' ou 'f'): ");
		sexo = entrada.nextLine().toUpperCase().charAt(0);
		System.out.print("SALÁRIO (R$): ");
		salario = new BigDecimal(entrada.nextLine());
		System.out.print("PLANO DE SAÚDE (Digite 's' ou 'n'): ");
		if (entrada.nextLine().equals("s"))
			planoSaude = true;
		else
			planoSaude = false;

		List<String> erros = new ArrayList<String>();
		
		// Envia os dados do funcionário (informados no formulário) ao controller. 
		// O controller retorna então um ArrayList contendo os erros encontrados.
		erros = new FuncionarioController().insereFuncionario(nome,
												              sexo,
												              salario,
										                      planoSaude,
										                      leCargo());
		
		if (erros.get(0) == null) { // Se o primeiro elemento do ArrayList for null.
			System.out.println("Funcionário cadastrado com sucesso.\n");
		} else { // Se o primeiro elemento do ArrayList não for null.
			String mensagem = "Não foi possível cadastrar o funcionário:\n";
			for (String e : erros) // Cria uma mensagem contendo todos os erros armazenados no ArrayList.
				mensagem = mensagem + e + "\n";
			System.out.println(mensagem);
		}
	}
	
	public static Cargo leCargo() {
		int codCargo;
		Cargo cargo = new Cargo();
		
		List<Cargo> cargos = new ArrayList<Cargo>();
		// Retorna um ArrayList de objetos Cargo, contendo o Id e a Descrição dos cargos cadastrados.
		cargos = new FuncionarioController().recuperaCargos();		
		String erro = new FuncionarioController().getExcecao();
		if (erro != null) // Caso ocorra qualquer tipo de exceção.
			System.out.println("Não foi possível recuperar os dados dos cargos:\n" + erro);
		
		if (cargos.size() != 0) { // Se existir pelo menos um cargo cadastrado.
			System.out.println("CARGOS CADASTRADOS: ");
			for (Cargo c : cargos)
				System.out.println(c.getId() + " - " + c.getDescricao());
			
			System.out.print("CARGO (Digite o código do cargo): ");
			codCargo = Integer.parseInt(entrada.nextLine());
			for (Cargo c : cargos)
				if (c.getId() == codCargo)
					cargo = c;
		}
		return cargo;
	}
}






















