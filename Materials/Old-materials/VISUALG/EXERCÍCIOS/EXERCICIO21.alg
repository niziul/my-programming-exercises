algoritmo "EXERCICIO21"
var
   Ano: inteiro
inicio
      Escreval ("    - A N O  B I S S E X T O -    ")
      Escreval ("----------------------------------")
      Escreval ("Qual Ano Deseja Saber Se � Bissexto?")
      Escreva ("Ano: ")
      Leia (Ano)
      Escreval ("----------------------------------")
      Escreval ("    - P R O C E S S A N D O -")
      Escreval ("----------------------------------")
      Se (Ano mod 400 = 0) entao
          Escreval ("O Ano De ", Ano, " � Bissexto!")
      senao
           se (Ano mod 4 = 0) e (Ano mod 100 >= 0) entao
              Escreval ("O Ano De", Ano, " � Bissexto!")
           senao
                Escreval ("O Ano De", Ano, " N�o � Bissexto!")
           FimSe
      FimSe
      Escreval ("----------------------------------")
      Escreval ("    == F I N A L I Z A D O ==")
      Escreval ("----------------------------------")
fimalgoritmo
