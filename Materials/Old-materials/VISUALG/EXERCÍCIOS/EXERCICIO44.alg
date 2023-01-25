algoritmo "semnome"
var
   C, U, I: inteiro
inicio
      Escreval ("+----------=======---------+")
      Escreva ("  Digite o primeiro valor: ")
      Leia (C)
      Escreval ("----------------------------")
      Escreva ("  Digite o ultimo valor: ")
      Leia (U)
      Escreval ("----------------------------")
      Escreva  ("  Digite um incremento: ")
      Leia (I)
      Escreval ("+-------===Status===------+")
      Escreva ("Contagem: ")
      C <- 0
      Enquanto (C <= U) faca
               Escreva ( C)
               C <- C + I
      FimEnquanto
      Escreval (" Acabou!")
fimalgoritmo
