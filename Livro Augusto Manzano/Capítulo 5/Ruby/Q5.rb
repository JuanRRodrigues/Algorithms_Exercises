=begin
**********************************************************************************
*   File:    Q5.rb                                                               *
*   Author:  Juan R. Rodrigues                                                   *
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
**********************************************************************************
 Escrever um programa que possibilite calcular a área total em metros de uma residência com os
cômodos sala, cozinha, banheiro, dois quartos, área de serviço, quintal, garagem, entre outros,
que podem ser fornecidos ao programa. O programa deve solicitar a entrada do nome, da
largura e do comprimento de um determinado cômodo. Em seguida, deve apresentar a área do
cômodo lido e também uma mensagem solicitando ao usuário a confirmação de continuar
calculando novos cômodos. Caso o usuário responda "NÃO", o programa deve apresentar o
valor total acumulado da área residencial.
=end

puts "Calculo de Area Residencial"
total_area = 0.0
continuar = "sim"
while continuar != "não"
puts "Digite nome do comodo"

#Nome do comodo
name = gets.chomp

#dados de largura com validação
largura = 0
while largura <= 0
puts "digite a Largura do comodo"

largura = gets.chomp.to_f
end

puts "digite a comprimento do comodo"

#dados de comprimento com validação
comprimento = 0
while comprimento <= 0
comprimento = gets.chomp.to_f

end

#Cálculos
area = largura * comprimento
total_area += area

#Saida comodo
puts "A Area do #{name} é #{area}"


  puts "Digite não se deseja sair"

  continuar = gets.chomp

end


#Saida Area total
puts "A area total da residencia é de #{total_area} metros quadrados."


