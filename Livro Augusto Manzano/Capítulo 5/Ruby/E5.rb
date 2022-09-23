=begin
**********************************************************************************
*   File:    E5.rb                                                               *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
**********************************************************************************
Elaborar um programa que apresente todos os valores numéricos inteiros ímpares situados na
faixa de O a 20. Sugestão: para verificar se o valor numérico é ímpar, dentro do laço de repetição, 
fazer a verificação lógica dessa condição com a instrução se/fim_se dentro do próprio
laço, perguntando se o valor numérico do contador é ímpar (se o resto do número dividido por 2
é diferente de zero); sendo, mostre-o; não sendo, passe para o próximo valor numérico. 
 
=end

puts "valores números ímpares sitados na faixa 0 a 20"

count = 0

while count < 19
    count += 1
    resto = count%2
    if resto != 0
        puts count
    end
end