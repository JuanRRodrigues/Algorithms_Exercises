package br.edu.ifsp.dao;

import java.sql.PreparedStatement;

public class GenericDao {
    private PreparedStatement comando; // Atributo usado para preparar e executar instruções SQL.
    /**
     * @param instrucaoSql Instrução SQL a ser executada.
     * @param parametros Valores dos campos da instrução SQL. As reticências no tipo Object 
     * indicam que "parametros" pode receber um número variável de argumentos Object. 
     */
    protected String insere(String instrucaoSql, Object... parametros) {
    	try {
    		String excecao = ConnectionDatabase.conectaBd(); // Abre a conexão com o banco de dados.
    		if (excecao == null) {
    			// Obtém os dados de conexão com o banco de dados e prepara a instrução SQL.
                comando = ConnectionDatabase.getConexaoBd().prepareStatement(instrucaoSql);
    			
    	    	// Associa cada parâmetro Object recebido ao objeto "comando".
    	        for (int i = 0; i < parametros.length; i++)
    	        	// 1º argumento: posição do parâmetro na instrução SQL; 2º argumento: parâmetro.
    	        	// Para objetos Funcionario: 1) Nome, 2) Sexo, 3) Salario, 4) PlanoSaude, 5) IdCargo
    	        	comando.setObject(i + 1, parametros[i]);

    	        comando.execute(); // Executa a instrução SQL.
    	        
    	        comando.close(); // Libera os recursos usados pelo objeto PreparedStatement.
    	        // Libera os recursos usados pelo objeto Connection e fecha a conexão com o banco de dados.
                ConnectionDatabase.getConexaoBd().close();
    		} else
        		return excecao; // Caso ocorra exceção ao tentar conectar com o banco de dados.
        } catch (Exception e) {
        	// Caso ocorra qualquer tipo de exceção.
            return "Tipo de Exceção: " + e.getClass().getSimpleName() + "\nMensagem: " + e.getMessage(); 
        }
        return null; // Se o registro foi inserido com sucesso.
    }
}
