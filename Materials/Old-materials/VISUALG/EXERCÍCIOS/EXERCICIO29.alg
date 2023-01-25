algoritmo "EXERCICIO29"
var
   Nome: Caractere
   Sal, D1, D2, D3, DF1, DF2, DF3: Real
   T: inteiro
inicio
      Escreval ("     - E M P  A U M E N T O -    ")
      Escreval ("----------------------------------")
      Escreva  ("Nome: ")
      Leia (Nome)
      Escreva  ("Sálario: ")
      Leia (Sal)
      Escreval ("A quanto tempo esta na empresa?")
      Escreva  ("Digite aqui: ")
      Leia (T)
      D1 <- Sal * 3 / 100
      D2 <- Sal * 12.5 / 100
      D3 <- Sal * 20 / 100
      DF1 <- Sal + D1
      DF2 <- Sal + D2
      DF3 <- Sal + D3
      Escreval ("----------------------------------")
      Escreval ("      - P R O C E S S A N D O -   ")
      Escreval ("----------------------------------")
      Se (T <= 3) entao
         Escreval ("Seu salário foi alterado.")
         Escreval ("Valor ", DF1:4:2)
      senao
           Se (T > 3) e (T <= 10) entao
              Escreval ("Seu salário foi alterado.")
              Escreval ("Valor ", DF2:4:2)
           senao
                Escreval ("Seu salário foi alterado.")
                Escreval ("Valor ", DF3:4:2)
                Escreval ("----------------------------------")
                Escreval ("**MUITO OBRIGADO POR TODOS")
                Escreval ("ESSES ANOS PRESTADO A EMPRESA**")
           FimSe
      FimSe
      Escreval ("----------------------------------")
      Escreval ("      == F I N A L I Z A D O ==   ")
      Escreval ("----------------------------------")
fimalgoritmo
