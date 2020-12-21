algoritmo "EXERCICIO26"
var
   N1, N2: inteiro
inicio
      Escreval ("        - O  N Ú M E R O -       ")
      Escreval ("----------------------------------")
      Escreva  ("Digite o 1° número: ")
      Leia (N1)
      Escreva  ("Digite um 2° número: ")
      Leia (N2)
      Escreval ("----------------------------------")
      Escreval ("      - P R O C E S S A N D O -   ")
      Escreval ("----------------------------------")
      Se (N1 > N2) entao
         Escreval ("O 1° número é o maior.")
      senao
           Se (N1 < N2) entao
              Escreval ("O 2° número é o maior.")
           senao
                Escreval ("Não exite um valor maior, os dois são iguais.")
           FimSe
      FimSe
      Escreval ("----------------------------------")
      Escreval ("     == F I N A L I Z A D O ==    ")
      Escreval ("----------------------------------")
fimalgoritmo
