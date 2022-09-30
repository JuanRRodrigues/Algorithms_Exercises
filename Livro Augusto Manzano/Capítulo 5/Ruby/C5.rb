=begin
**********************************************************************************
*   File:    C5.rb                                                               *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
**********************************************************************************
Construir um programa que apresente a soma dos cem primeiros números naturais
(1+2+3+ ... +98+99+100).
 
=end

puts "Soma dos cem primeros numeros naturais"

contador = 1
n = 1
resposta = 1
while contador <= 100
   contador += 1
   resposta = (contador + (n + resposta - 1))
   
   
   if (contador == 100)
      puts resposta
  else
       
   end
end


