=begin
**********************************************************************************
*   File:    B5.rb                                                               *
*   Author:  Juan R. Rodrigues                                                   *
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
**********************************************************************************
------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 Japanese
「任意の数の乗算表の結果を表示するプログラムを作成し、それは従来の形式で表示する必要があります
------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 German
Ein Programm entwickeln, das die Ergebnisse der Multiplikationstabelle für jede Zahl anzeigt, die in ihrer traditionellen Form präsentiert werden sollte.
------------------------------------------------------------------------------------------------------------------------------------------------------------------------
English
To develop a program that displays the results of the multiplication table for any number, which should be presented in its traditional form.
------------------------------------------------------------------------------------------------------------------------------------------------------------------------
PT-BR
Elaborar um programa que mostre os resultados da tabuada de um número qualquer, a qual
deve ser apresentada de acordo com sua forma tradicional.
------------------------------------------------------------------------------------------------------------------------------------------------------------------------


=end

# Multiplication table program
puts "Traditional Multiplication Table"
puts "Enter an integer number"
# Gets an integer number from user input and converts it to an integer
number = gets.to_i

# Adds a one second delay before executing next line of code
sleep 1

# Initializes variables to hold multiplication results and count up to 10
product = 0
counter = 0

# Loop through and calculate the multiplication results
loop do
  # Increments the counter variable for each iteration
  counter += 1
  # Calculates the multiplication result
  product = (counter * number)
  # Outputs the result to the console with proper formatting
  puts "#{counter}x#{number}=#{product}"
  # Breaks out of the loop after reaching 10 iterations
  if counter == 10
    break
  end
end


=begin Codes improved by ChatGPT
       Verbesserte Codes durch ChatGPT
       ChatGPTによるコードの改善
------------------------------------------------------------------------
# Print message to prompt user for input
puts "Traditional Multiplication Table"
puts "Enter an integer:"

# Get user input and convert to integer
number = gets.to_i

# Print message to indicate multiplication table for given number
puts "Here's the multiplication table for #{number}:"
puts "----------------------------------------------"

# Iterate through numbers 1 to 10 using the `each` method and print the results
(1..10).each do |counter|
   product = (counter * number)
   puts "#{counter} x #{number} = #{product}"
end
------------------------------------------------------------------------
=end
