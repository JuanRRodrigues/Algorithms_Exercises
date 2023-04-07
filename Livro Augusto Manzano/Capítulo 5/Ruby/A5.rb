=begin
**********************************************************************************
*   File:    A5.rb                                                               *
*   Author:  Juan R. Rodrigues                                                   *
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
**********************************************************************************
------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 Japanese
「15から200までの範囲に存在する整数の2乗の結果を表示するプログラムを作成してください。」(15 kara 200 made no han'i ni sonzai suru seisu no 2-jou no kekka wo hyouji suru puroguramu wo sakusei shite kudasai.)
------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 German
"Erstellen Sie ein Programm, das die Quadrate der ganzen Zahlen im Bereich von 15 bis 200 als Ergebnis ausgibt."
------------------------------------------------------------------------------------------------------------------------------------------------------------------------
English
"Develop a program that presents the squares of the integer numbers in the range of 15 to 200 as a result."
------------------------------------------------------------------------------------------------------------------------------------------------------------------------
PT-BR
Elaborar um programa que apresente como resultado os quadrados dos números inteiros
existentes na faixa de valores de 15 a 200.
------------------------------------------------------------------------------------------------------------------------------------------------------------------------

count = counter / result = Value of the squares
=end

#variables
count = 0
result = 0


puts "Squares of integer numbers in the range of 15 to 200."

#loop
loop do
    result = (count ** 2)
    if count > 14
    puts result
end
    if count > 200
        break
    end
    count += 1

end

=begin Codes improved by ChatGPT
       Verbesserte Codes durch ChatGPT
       ChatGPTによるコードの改善
------------------------------------------------------------------------
puts "Squares of integer numbers in the range of 15 to 200"

for count in 15..200
  puts count ** 2
end
------------------------------------------------------------------------
=end
