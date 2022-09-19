=begin
**********************************************************************************
*   File:    A5.rb                                                               *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
**********************************************************************************

Elaborar um programa que apresente como resultado os quadrados dos números inteiros
existentes na faixa de valores de 15 a 200. 


=end
count = 1
resposta = 0
puts "Quadrados de numeros inteiros existentes na faixa de 15 a 200"

loop do
    resposta = (count ** 2)
    if resposta >= 15 && resposta <= 200
    puts resposta
end
    if resposta >= 200
        break
    end
    count += 1
    
end

