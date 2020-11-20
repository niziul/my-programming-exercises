algoritmo "EXERCICIO35"
var
   T, Tp: inteiro
   Km, CP, CL, CPK1, CPK2, CLK1, CLK2: Real
   CPT1, CPT2, CLT1,  CLT2: Real
inicio
      Escreval ("         - C A R R O S -          ")
      Escreval ("----------------------------------")
      Escreval ("Qual o tipo do carro?: ")
      Escreval ("[1] Popular")
      Escreval ("[2] Luxo")
      Escreva ("Digite aqui: ")
      Leia (T)
      Escreval ("----------------------------------")
      Escreval ("Quantos dias passou com o carro?")
      Escreva  ("Digite aqui: ")
      Leia (Tp)
      Escreval ("Quantos quilomentros andou com o carro?")
      Escreva  ("Digite aqui: ")
      Leia (Km)
      CP <- Tp * 90
      CL <- Tp * 150
      CPK1 <- Km * 0.20
      CPK2 <- Km * 0.10
      CLK1 <- Km * 0.30
      CLK2 <- Km * 0.25
      CPT1 <- CP + CPK1
      CPT2 <- CP + CPK2
      CLT1 <- CL + CLK1
      CLT2 <- CL + CLK2
      Escreval ("----------------------------------")
      Escreval ("      - P R O C E S S A N D O -   ")
      Escreval ("----------------------------------")
      Escolha T
              Caso 1
                   Se (Km <= 100) entao
                      Escreval ("Tipo: POPULAR")
                      Escreval ("Valor: ", CPT1:4:2)
                   senao
                        Se (Km > 100) e (Km <= 200) entao
                           Escreval ("Tipo: POPULAR")
                           Escreval ("Valor: ", CPT2:4:2)
                      FimSe
                   FimSe
              Caso 2
                   Se (Km < 200) entao
                      Escreval ("Tipo: LUXO")
                      Escreval ("Valor: ", CLT1:4:2)
                   senao
                        Escreval ("Tipo: LUXO")
                        Escreval ("Valor: ", CLT2:4:2)
                   FimSe
      FimEscolha
      Escreval ("----------------------------------")
      Escreval ("      == F I N A L I Z A D O ==   ")
      Escreval ("----------------------------------")
fimalgoritmo
