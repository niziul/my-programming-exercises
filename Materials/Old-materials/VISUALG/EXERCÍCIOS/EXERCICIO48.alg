algoritmo "semnome"
var
   S, C, RN: inteiro
inicio
      S <- 0
      C <- 1
      Enquanto (C <= 7)faca
               Escreva ("Digite o", C,"� n�mero: ")
               Leia (RN)
               S <- RN + S
               C <- C + 1
      FimEnquanto
      Escreval ("--------------------------------")
      Escreval ("A soma de todos os n�mero �: ", S)
fimalgoritmo
