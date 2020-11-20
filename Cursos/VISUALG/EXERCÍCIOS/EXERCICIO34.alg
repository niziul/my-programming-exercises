algoritmo "EXERCICIO34"
var
   K, M, IMC: Real
inicio
      Escreval ("             - I M C -            ")
      Escreval ("----------------------------------")
      Escreva  ("Diga sua altura (m): ")
      Leia (M)
      Escreva  ("Diga seu peso (Kg): ")
      Leia (K)
      IMC <- K / (M ^ 2)
      Escreval ("----------------------------------")
      Escreval ("      - P R O C E S S A N D O -   ")
      Escreval ("----------------------------------")
      Escreval("IMC: ", IMC:5:2)
      Se (IMC < 17) entao
         Escreval ("**Muito abaixo do peso**")
      senao
           se (IMC >= 17) e (IMC < 18.5) entao
               Escrevel ("**Status: Abaixo do Peso**")
           senao
                Se (IMc >= 18.5) e (IMC < 25) entao
                   Escreval ("**Status: Peso Ideal**")
                senao
                     Se (IMC >= 25) e (IMC < 30) entao
                        Escreval ("**Status: Sobrepeso**")
                     senao
                          Se (IMC >= 30) e (IMC < 35) entao
                             Escreval ("**Status: Obesidade**")
                          senao
                               Se (IMC >= 35) e (IMC < 40) entao
                                  Escreval ("**Status: Obesidade Severa**")
                               senao
                                    Escreval ("**Status: Obesidade Morbida*")
                               FimSe
                          FimSe
                     FimSe
                FimSe
           FimSe
      FimSe
      Escreval ("----------------------------------")
      Escreval ("      == F I N A L I Z A D O ==   ")
      Escreval ("----------------------------------")
fimalgoritmo
