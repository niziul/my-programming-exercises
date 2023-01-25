algoritmo "semnome"
var
   S, C, RN: inteiro
inicio
      S <- 0
      C <- 1
      Enquanto (C <= 7)faca
               Escreva ("Digite o", C,"° número: ")
               Leia (RN)
               S <- RN + S
               C <- C + 1
      FimEnquanto
      Escreval ("--------------------------------")
      Escreval ("A soma de todos os número é: ", S)
fimalgoritmo
