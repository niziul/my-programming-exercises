algoritmo "EXERCICIO26"
var
   N1, N2: inteiro
inicio
      Escreval ("        - O  N � M E R O -       ")
      Escreval ("----------------------------------")
      Escreva  ("Digite o 1� n�mero: ")
      Leia (N1)
      Escreva  ("Digite um 2� n�mero: ")
      Leia (N2)
      Escreval ("----------------------------------")
      Escreval ("      - P R O C E S S A N D O -   ")
      Escreval ("----------------------------------")
      Se (N1 > N2) entao
         Escreval ("O 1� n�mero � o maior.")
      senao
           Se (N1 < N2) entao
              Escreval ("O 2� n�mero � o maior.")
           senao
                Escreval ("N�o exite um valor maior, os dois s�o iguais.")
           FimSe
      FimSe
      Escreval ("----------------------------------")
      Escreval ("     == F I N A L I Z A D O ==    ")
      Escreval ("----------------------------------")
fimalgoritmo
