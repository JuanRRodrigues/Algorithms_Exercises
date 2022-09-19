=begin
**********************************************************************************
*   File:    B5.rb                                                               *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
**********************************************************************************

Elaborar um programa que mostre os resultados da tabuada de um número qualquer, a qual
deve ser apresentada de acordo com sua forma tradicional.
 

=end
puts "Tabuada Tradicional de Multiplicação"
puts "Informe um numero inteiro"
numero = gets.to_i

sleep 1

produto = 0
contador = 0

loop do 
   contador += 1
   produto = (contador * numero)
   puts "#{contador}x#{numero}=#{produto}"
if contador == 10
      break
    end 
end  
