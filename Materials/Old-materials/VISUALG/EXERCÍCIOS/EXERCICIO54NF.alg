algoritmo "semnome"
var
   R, P90, Pm160, Pm190: inteiro
   P, A, Mg, SoM: Real
inicio
      Para R <- 1 ate 7 faca
           Escreval (">>===================<<")
           Escreval ("        > PESOS <      ")
           Escreval ("---------------------<<")
           Escreval ("Qual Seu Peso?")
           Escreva ("> ")
           Leia (P)
           Escreval ("Qual Sua Altura?")
           Escreva ("> ")
           Leia (A)
           LimpaTela
           Se (P >= 90) entao
              P90 <- P90 + 1
           FimSe
           Se ((P <= 50) e (A <= 1.60)) entao
              Pm160 <- Pm160 + 1
           FimSe
           Se ((P >= 100) e (A >= 1.90)) entao
              Pm190 <- Pm190 + 1
           FimSe
           SoM <- SoM + A
      FimPara
      Mg <- SoM / 7
fimalgoritmo
