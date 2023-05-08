package br.edu.ifsp.dao;

import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.util.ArrayList;
import java.util.List;

import br.edu.ifsp.model.cargo.Cargo;
import br.edu.ifsp.model.funcionario.Funcionario;

public class FuncionarioDao extends GenericDao {
	private String instrucaoSql; // Atributo para armazenar a instrução SQL a ser executada.
	private PreparedStatement comando; // Atributo usado para preparar e executar instruções SQL.
	private ResultSet registros; // Atributo que recebe os dados retornados por uma instrução SQL.
	private static String excecao = null; // Atributo para armazenar mensagens de excecao.

    public String insereFuncionario(Funcionario funcionario) {
        instrucaoSql = "INSERT INTO FUNCIONARIO (Nome, Sexo, Salario, PlanoSaude, IdCargo) VALUES (?,?,?,?,?)";
        return insere(instrucaoSql, funcionario.getNome(), funcionario.getSexo().toString(), funcionario.getSalario(),
        	                        funcionario.isPlanoSaude(), funcionario.getCargo().getId());
    }
    
    public List<Cargo> recuperaCargos() {
        Cargo cargo;
        List<Cargo> cargos = new ArrayList<Cargo>();
        instrucaoSql = "SELECT * FROM CARGO";
        
        try {
        	excecao = ConnectionDatabase.conectaBd(); // Abre a conexão com o banco de dados.
        	if (excecao == null) {
                // Obtém os dados de conexão com o banco de dados e prepara a instrução SQL.
                comando = ConnectionDatabase.getConexaoBd().prepareStatement(instrucaoSql);
                
                // Executa a instrução SQL e retorna os dados ao objeto ResultSet.
                registros = comando.executeQuery();
                
                if (registros.next()) { // Se for retornado pelo menos um registro.
                    registros.beforeFirst(); // Retorna o cursor para antes do 1º registro.
        	        while (registros.next()) {
                        // Atribui o Id e a Descrição do cargo ao objeto Cargo por meio dos métodos set e
                        // adiciona este objeto ao ArrayList funcionarios.
        	            cargo = new Cargo();
        	            cargo.setId(registros.getInt("Id"));
        	            cargo.setDescricao(registros.getString("Descricao"));
        	            cargos.add(cargo);
        	        }
        	    }
                registros.close(); // Libera os recursos usados pelo objeto ResultSet.
                comando.close(); // Libera os recursos usados pelo objeto PreparedStatement.
                // Libera os recursos usados pelo objeto Connection e fecha a conexão com o banco de dados.
                ConnectionDatabase.getConexaoBd().close(); 
            }
        } catch (Exception e) {
        	excecao = "Tipo de Exceção: " + e.getClass().getSimpleName() + "\nMensagem: " + e.getMessage();
        	cargos = null; // Caso ocorra qualquer exceção.
        }
        return cargos; // Retorna o ArrayList de objetos Cargo.
    }
    
    // Esse método é necessário, porque os métodos "recuperaCargos" e "consultaFuncionarios" retornam List<> e não String.
	public String getExcecao() {
		return excecao;
	}
}
