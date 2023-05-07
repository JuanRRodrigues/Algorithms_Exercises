package br.edu.ifsp.model.cargo;

import java.util.ArrayList;
import java.util.List;

public class CargoValidacao {
	private static List<String> errosValidacao; // List para armazenar as mensagens de erro de valida��o.
	
	// Valida os dados informados conforme as regras abaixo.
	public static List<String> validaCargo(Cargo cargo){
		errosValidacao = new ArrayList<>();
		
		// Valida��o do campo Nome.
		if (!cargo.getDescricao().equals("")) {
			if (cargo.getDescricao().length() < 10 || cargo.getDescricao().length() > 100)
				errosValidacao.add("* A descricao deve ter entre 10 e 100 caracteres.");
		} else {
			errosValidacao.add("* A descricao nao foi informado.");
		}
		
		// Valida��o do campo Cargo (para o caso de n�o existirem cargos cadastrados).
		if (cargo.getDepartamento() == null)
			errosValidacao.add("* O Departamento n�o foi informado.");
		
		return errosValidacao; // Retorna o ArrayList contendo as mensagens de erro de valida��o.
	}
}