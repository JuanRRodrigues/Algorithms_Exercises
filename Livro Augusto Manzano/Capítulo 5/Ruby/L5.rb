=begin
**********************************************************************************
*   File:    L5.rb                                                               *
*   Author:  Juan R. Rodrigues                                                   *                                     
*   Book: Algoritmos: Lógica para desenvolvimento de programação de computadores *
**********************************************************************************
Elaborar um programa que leia quinze valores numéricos inteiros e no final apresente o
somatório da fatorial de cada valor lido.
=end

numeros = []
i = 0

while i <= 14
    puts "digite um valor inteiro:"
    numeros[i] = gets.to_i
    f = numeros[i]-1
    valoratual = numeros[i]
    while f > 0
        
        numeros[i] = valoratual*f
        valoratual = numeros[i]
        f -= 1
end
puts "fatorial #{i}: #{numeros[i]}"
i += 1
end
