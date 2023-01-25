algoritmo "semnome"
var
   S, C: inteiro
inicio
      S <- 0
      C <- 500
      Enquanto (C >= 0)faca
               Escreval (C)
               S <- C + S
               C <- C - 50
      FimEnquanto
      Escreval ("--------------------------------")
      Escreval ("A soma de todos os número é: ", S)
fimalgoritmo
