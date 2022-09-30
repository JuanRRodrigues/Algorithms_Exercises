=begin
**********************************************************************************
*   File:    G5.rb                                                               *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
**********************************************************************************
Elaborar um programa que apresente os resultados das potências do valor de base 3, elevado a um
expoente que varie do valor O até o valor 15. O programa deve apresentar os valores 1, 3, 9. 27, ... ,
14.348.907. Sugestão: leve em consideração as definições matemáticas do cálculo de potência, em
que qualquer valor numérico diferente de zero elevado a zero é 1, e todo valor numérico elevado a 1
é ele próprio. Não use em hipótese nenhuma o operador aritmético de exponenciação apresentado
no capítulo 3; resolva o problema com a técnica de laço
=end

puts "Resultados das potências de base 3, elevado de 0 até o valor 15"

count = 0
numero = 3
resultado = 0
while count < 16
    resultado = (numero*resultado)

    if resultado == 0
        resultado += 1
    end
  puts "O numero #{numero} elevado a #{count} é: #{resultado}"
   count += 1

end
