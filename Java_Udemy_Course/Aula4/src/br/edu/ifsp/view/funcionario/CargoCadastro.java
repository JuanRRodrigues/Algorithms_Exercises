package br.edu.ifsp.view.funcionario;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

import br.edu.ifsp.controller.CargoController;
import br.edu.ifsp.model.departamento.Departamento;

public class CargoCadastro {
	static Scanner entrada = new Scanner(System.in);
	
	public static void exibeInterface() {
		String Descricao;
		

		System.out.println("\nCADASTRO DE CARGO:");
		System.out.print("Descricao: ");
		Descricao = entrada.nextLine();
		List<String> erros = new ArrayList<String>();
		
		// Envia os dados do funcion�rio (informados no formul�rio) ao controller. 
		// O controller retorna ent�o um ArrayList contendo os erros encontrados.
		erros = new CargoController().insereCargo(Descricao,
												          
										                      leDepartamento());
		
		if (erros.get(0) == null) { // Se o primeiro elemento do ArrayList for null.
			System.out.println("Cargo cadastrado com sucesso.\n");
		} else { // Se o primeiro elemento do ArrayList n�o for null.
			String mensagem = "N�o foi poss�vel cadastrar o cargo:\n";
			for (String e : erros) // Cria uma mensagem contendo todos os erros armazenados no ArrayList.
				mensagem = mensagem + e + "\n";
			System.out.println(mensagem);
		}
	}
	
	public static Departamento leDepartamento() {
		int codDepartamento;
		Departamento departamento = new Departamento();
		
		List<Departamento> departamentos = new ArrayList<Departamento>();
		// Retorna um ArrayList de objetos Cargo, contendo o Id e a Descri��o dos cargos cadastrados.
		departamentos = new CargoController().recuperaDepartamento();		
		String erro = new CargoController().getExcecao();
		if (erro != null) // Caso ocorra qualquer tipo de exce��o.
			System.out.println("N�o foi poss�vel recuperar os dados dos Departamento:\n" + erro);
		
		if (departamentos.size() != 0) { // Se existir pelo menos um cargo cadastrado.
			System.out.println("Departamentos CADASTRADOS: ");
			for (Departamento d : departamentos)
				System.out.println(d.getId() + " - " + d.getNomeDepto() );
			
			System.out.print("Digite (Digite o c�digo do departamento): ");
			codDepartamento = Integer.parseInt(entrada.nextLine());
			for (Departamento d : departamentos)
				if (d.getId() == codDepartamento)
					departamento = d;
		}
		return departamento;
	}
}










