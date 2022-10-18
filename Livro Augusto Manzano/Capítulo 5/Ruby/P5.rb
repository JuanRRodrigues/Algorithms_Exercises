=begin
**********************************************************************************
*   File:    P5.rb                                                               *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
**********************************************************************************
 Elaborar um programa que apresente os resultados da soma e da média aritmética dos valores
pares situados na faixa numérica de 50 até 70.
=end
i = 0
soma = 0
count = 50
while count <= 70
if count % 2 == 0
    i += 1
    soma +=  count 
    media = soma/i
end
count += 1
end
 puts "Soma = #{soma} ----- Media = #{media}"

