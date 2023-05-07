package br.edu.ifsp.model.departamento;

import br.edu.ifsp.model.cargo.Cargo;
import br.edu.ifsp.model.funcionario.Funcionario;

public class Departamento {
	private Integer id;
	private String nomeDepto;
	private int idFuncgerente;
	
	
	public Integer getId() {
		return id;
	}
	

	
	
	public void setId(Integer id) {
		this.id = id;
	}
	
	

	public String getNomeDepto() {
		return nomeDepto;
	}




	public void setNomeDepto(String nomeDepto) {
		this.nomeDepto = nomeDepto;
	}




	public int getIdFuncgerente() {
		return idFuncgerente;
	}

	public void setIdFuncgerente(int idFuncgerente) {
		this.idFuncgerente = idFuncgerente;
	}
	
	public void setFuncionarios(Funcionario funcionario) {
	}
	public void setCargo(Cargo cargo) {
	}




	public void add(Departamento departamento) {
		// TODO Auto-generated method stub
		
	}



}
