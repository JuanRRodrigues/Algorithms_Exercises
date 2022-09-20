=begin
**********************************************************************************
*   File:    D5.rb                                                               *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
**********************************************************************************
Elaborar um programa que apresente o somatório dos valores pares existentes na faixa de 1 até 500. 
 
=end

puts "Soma dos valores pares existentes na faixa de 1 até 500"
valor = 0
resultado = 0

while valor <= 500
    valor += 1
    resto = valor%2
    if resto == 0
        resultado = valor + resultado
    end
end

puts "Soma:#{resultado}"
