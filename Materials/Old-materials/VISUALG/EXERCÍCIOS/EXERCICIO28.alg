algoritmo "EXERCICIO28"
var
   L, C, MQ: Real
inicio
      Escreval ("          - I M O V E L -         ")
      Escreval ("----------------------------------")
      Escreva  ("Diga-me a largura do terreno (m): ")
      Leia (L)
      Escreva  ("Diga-me também o comprimento (m): ")
      Leia (C)
      MQ <- (L * C) / 4
      Escreval ("----------------------------------")
      Escreval ("      - P R O C E S S A N D O -   ")
      Escreval ("----------------------------------")
      Se (MQ < 100) entao
         Escreval ("O seu terro tem", MQ, "²")
         Escreval ("Tipo: TERRENO POPULAR.")
      senao
           Se (MQ >= 100) e (MQ < 500) entao
              Escreval ("O seu terro tem", MQ, "²")
              Escreval ("Tipo: TERRENO MASTER")
           senao
                Escreval ("O seu terro tem", MQ, "²")
                Escreval ("Tipo: TERRENO VIP")
           FimSe
      FimSe
      Escreval ("----------------------------------")
      Escreval ("      == F I N A L I Z A D O ==   ")
      Escreval ("----------------------------------")
fimalgoritmo
