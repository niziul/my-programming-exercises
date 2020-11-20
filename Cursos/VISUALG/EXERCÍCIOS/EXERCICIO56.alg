algoritmo "semnome"
var
   S, C, N: Inteiro
inicio
      S <- 0
      C <- 1
      Repita
         Escreva ("Digite o", C,"° Número: ")
         Leia (N)
         C <- C + 1
         S <- S + N
      Ate (N = 1111)
      S <- S - 1111
      Escreval (">>=======================<<")
      Escreval ("A Soma Entre Todos Os Número Digitado foi:", S)
fimalgoritmo
