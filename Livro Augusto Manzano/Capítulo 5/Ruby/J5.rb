=begin
**********************************************************************************
*   File:    J5.rb                                                               *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
**********************************************************************************
Elaborar um programa que apresente os valores de conversão de graus Celsius em graus
Fahrenheit, de dez em dez graus, iniciando a contagem em dez graus Celsius e finalizando em
cem graus Celsius. O programa deve apresentar os valores das duas temperaturas. 
=end

puts "Conversao de graus celsius e farenhait"


celsius = 0

while celsius < 100
    celsius += 10
    farenhait = (9*celsius+160)/5;

puts "Farenhait: #{farenhait} = Celsius: #{celsius} "


end

