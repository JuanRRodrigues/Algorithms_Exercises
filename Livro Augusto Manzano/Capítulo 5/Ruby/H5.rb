=begin
**********************************************************************************
*   File:    H5.rb                                                               *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
**********************************************************************************
Escrever um programa que apresente como resultado a potência de uma base qualquer elevada
a um expoente qualquer, ou seja, de BE, em que B é o valor da base e E o valor do expoente.
Considere apenas a entrada de valores inteiros e positivos, ou seja, de valores naturais.
Sugestão: não utilize o formato "base j expoente", pois é uma solução muito trivial. Use a
técnica de laço, em que o valor da base deve ser multiplicado o número de vezes determinado
no expoente. 
=end


puts "Resultados das potências de uma base qualquer"

puts "Digite a Base"
base = gets.chomp.to_i
puts "Digite o Expoente"
expoente = gets.chomp.to_i

count = 0
resultado = 0
while count <= expoente
    resultado = (base*resultado)

    if resultado == 0
        resultado += 1
    end
  puts "O numero #{base} elevado a #{expoente} é: #{resultado}"
   count += 1

end