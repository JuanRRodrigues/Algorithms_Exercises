=begin
**********************************************************************************
*   File:    M5.rb                                                               *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
**********************************************************************************
 Elaborar um programa que leia dez valores numéricos reais e apresente no final o somatório e a
média dos valores lidos. 

=end

numero = []
i = 0
soma = 0

while i <= 9
    puts "digite um valor inteiro:"
    numero[i] = gets.to_i
    
    soma = numero[i] + soma
    i += 1
end
media = soma / 10

puts "Soma = #{soma}"  
puts "Media = #{media}" 