=begin
**********************************************************************************
*   File:    O5.rb                                                               *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
**********************************************************************************
 Construir um programa que apresente como resultado a fatorial dos valores ímpares situados na
faixa numérica de 1 até 1 O
=end

count = 0
fatorial = 1
total = 0
resultado = 1
while count < 10
      
      fatorial = count
      
  if (count % 2) != 0
      count += 1
      while fatorial > 0
       if count == 1
         resultado = resultado * fatorial  
        else
         fatorial -= 1
         resultado = resultado * fatorial
       
    
         end
      puts resultado
  
end
end
end


