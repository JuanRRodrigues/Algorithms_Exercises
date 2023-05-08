package br.edu.ifsp.model.cargo;

import br.edu.ifsp.model.departamento.Departamento;

public class Cargo {
	private Integer id;
	private String descricao;
	private Departamento departamento;
	
	public Integer getId() {
		return id;
	}
	
	public String getDescricao() {
		return descricao;
	}
	
	public Departamento getDepartamento() {
		return departamento;
	}
	
	public void setId(Integer id) {
		this.id = id;
	}
	
	public void setDescricao(String descricao) {
		this.descricao = descricao;
	}
	

	public void setCargo(Departamento departamento) {
		this.departamento = departamento;
	}

	public void setDepartamento(Departamento departamento2) {
		// TODO Auto-generated method stub
		
	}
	
}
