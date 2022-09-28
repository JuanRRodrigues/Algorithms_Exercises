=begin
**********************************************************************************
*   File:    I5.rb                                                               *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
**********************************************************************************
Escrever um programa que apresente os valores da sequência numérica de Fibonacci até o
décimo quinto termo. A sequência de Fibonacci é formada por O, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55,
89, 144, 233, 377, ... etc., obtendo-se o próximo termo a partir da soma do termo atual com o
anterior sucessivamente até o infinito, se a sequência não for interrompida. Utilize para este
exercício as variáveis ATUAL, ANTERIOR e PRÓXIMO
=end

puts "Sequencai"

count = 0
atual = 1
anterior = 0
proximo = 1

while count <= 10
    
    proximo = (atual+anterior)

 
  puts "#{anterior}, #{atual}, #{proximo}"
  anterior = atual
  atual = proximo
  
   count += 1

end