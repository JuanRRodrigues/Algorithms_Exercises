package br.edu.ifsp.model.funcionario;

import java.util.ArrayList;
import java.util.List;

public class FuncionarioValidacao {
	private static List<String> errosValidacao; // List para armazenar as mensagens de erro de valida��o.
	
	// Valida os dados informados conforme as regras abaixo.
	public static List<String> validaFuncionario(Funcionario funcionario){
		errosValidacao = new ArrayList<>();
		
		// Valida��o do campo Nome.
		if (!funcionario.getNome().equals("")) {
			if (funcionario.getNome().length() < 5 || funcionario.getNome().length() > 100)
				errosValidacao.add("* O Nome deve ter entre 5 e 100 caracteres.");
		} else {
			errosValidacao.add("* O Nome n�o foi informado.");
		}
		
		// Valida��o do campo Sal�rio.
		if (funcionario.getSalario() != null) {
			if (funcionario.getSalario().doubleValue() < 1000 || funcionario.getSalario().doubleValue() > 10000)
				errosValidacao.add("* O Sal�rio deve ser de R$ 1.000,00 � R$ 10.000,00.");
		} else
			errosValidacao.add("* O Sal�rio n�o foi informado.");
		
		// Valida��o do campo Cargo (para o caso de n�o existirem cargos cadastrados).
		if (funcionario.getCargo() == null)
			errosValidacao.add("* O Cargo n�o foi informado.");
		
		return errosValidacao; // Retorna o ArrayList contendo as mensagens de erro de valida��o.
	}
}