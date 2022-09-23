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
Base = gets.chomp.to_i
puts "Digite o Expoente"
Expoente = gets.chomp.to_i

count = 0
resultado = 0
while count <= Expoente
    resultado = (Base*resultado)

    if resultado == 0
        resultado += 1
    end
  puts "O numero #{Base} elevado a #{Expoente} é: #{resultado}"
   count += 1

end