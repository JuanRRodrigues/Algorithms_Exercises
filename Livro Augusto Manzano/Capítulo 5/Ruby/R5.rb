=begin
**********************************************************************************
*   File:    J5.rb                                                               *
*   Author:  Juan R. Rodrigues                                                   *
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
**********************************************************************************
 Elaborar um programa que leia valores positivos inteiros até que um valor negativo seja
informado. Ao final devem ser apresentados o maior e o menor valores informados pelo usuário.
=end


puts "digite valores positivos inteiros(para parar o programa digite um negativo)"


# Lê o primeiro número digitado pelo usuário.
number = gets.chomp.to_i

# Verifica se o número digitado é negativo.
if number < 0
  puts "Você Não digito um numero válido"
else
  # Inicializa as variáveis máxima e mínima com o primeiro número digitado
max = number
min = number
end


# Entra em um loop para ler os próximos números digitados pelo usuário.
while number > 0
 # Atualiza as variáveis máxima e mínima de acordo com o número digitado.
  if number < min
    min = number
  elsif number > max
      max = number
  end

   # Atualiza as variáveis máxima e mínima de acordo com o número digitado.
  number = gets.chomp.to_i
end

# Exibe os valores máximos e mínimos encontrados.
 puts "maior Número: #{max} menor Número #{min}"
