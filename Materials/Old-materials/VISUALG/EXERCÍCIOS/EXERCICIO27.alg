algoritmo "EXERCICIO27"
var
   Nome: Caractere
   N1, N2, M: Real
inicio
      Escreval ("           - M É D I A -          ")
      Escreval ("----------------------------------")
      Escreva  ("Nome: ")
      Leia (Nome)
      Escreva  ("1° Nota: ")
      Leia (N1)
      Escreva  ("2° Nota: ")
      Leia (N2)
      M <- (N1 + N2) / 2
      Escreval ("----------------------------------")
      Escreval ("     - P R O C E S S A N D O -    ")
      Escreval ("----------------------------------")
      Se (M >= 7.0) entao
         Escreval ("Aluno: ", Nome)
         Escreval ("Média: ", M:2:1)
         Escreval ("Status: APROVADO.")
      senao
           Se (M >= 5.0) e (M <= 6.9) entao
              Escreval ("Aluno: ", Nome)
              Escreval ("Média: ", M:2:1)
              Escreval ("Status: RECUPERAÇÃO.")
           senao
                Escreval ("Aluno: ", Nome)
                Escreval ("Média: ", M:2:1)
                Escreval ("Status: REPROVADO.")
           FimSe
      FimSe
      Escreval ("----------------------------------")
      Escreval ("     == F I N A L I Z A D O ==    ")
      Escreval ("----------------------------------")
fimalgoritmo
