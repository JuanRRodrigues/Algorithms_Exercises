=begin
**********************************************************************************
*   File:    F5.rb                                                               *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
**********************************************************************************
Construir um programa que apresente todos os valores numéricos divisíveis por 4 e menores que
200. Sugestão: a variável que controla o contador do laço deve ser iniciada com valor 1. 
=end


puts "Todos os números divisíveis por 4 e menores que 200"

count = 0
while count < 199
    count += 1
    resto = count%4
    if resto == 0
        puts count
    end
end

