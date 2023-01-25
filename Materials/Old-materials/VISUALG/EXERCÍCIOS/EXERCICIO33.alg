algoritmo "EXERCICIO33"
var
   VC, GM, T, P: Real
inicio
      Escreval ("      - E M P R E S T I M O -     ")
      Escreval ("----------------------------------")
      Escreva  ("Valor da casa: R$")
      Leia (VC)
      Escreva  ("Qual é o seu ganho mensal: R$")
      Leia (GM)
      Escreval ("Em quantos anos você predente pagar a casa?")
      Escreva  ("Digite aqui (Anos): ")
      Leia (T)
      P <- VC / GM * T
      Escreval ("----------------------------------")
      Escreval ("      - P R O C E S S A N D O -   ")
      Escreval ("----------------------------------")
      Se (P <= 30) entao
         Escreval ("Status: APROVADO.")
      senao
           Escreval ("Status: NEGADO.")
      FimSe
      Escreval ("----------------------------------")
      Escreval ("      == F I N A L I Z A D O ==   ")
      Escreval ("----------------------------------")
fimalgoritmo
