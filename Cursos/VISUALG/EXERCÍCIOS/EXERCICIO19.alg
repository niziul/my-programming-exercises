algoritmo "EXERCICIO19"
var
   Nome: Caractere
   N1, N2, M: Real
inicio
      Escreval ("       - M É D I A -    ")
      Escreval ("---------------------------")
      Escreval ("Diga-me Seu Nome!")
      Escreva ("Nome: ")
      Leia (Nome)
      Escreva ("Informe a 1° Nota: ")
      Leia (N1)
      Escreva ("Informe a 2° Nota: ")
      Leia (N2)
      M <- (N1 + N2) / 2
      Escreval ("---------------------------")
      Se (M >= 7) entao
         Escreval ("Aluno: ", Nome)
         Escreval ("Média do aluno: ", M:2:1)
         Escreval ("Status: APROVADO")
      senao
           Escreval ("Aluno: ", Nome)
           Escreval ("Média do aluno: ", M:2:1)
           Escreval ("Status: REPROVADO")
           Escreval ("---------------------------")
           Escreval ("Infelismente Você Foi Reprovado")
           Escreval (",Pq Sua Média foi inferior a 7.0.")
      FimSe
      Escreval ("---------------------------")
      Escreval (" == F I N A L I Z A D O ==")
      Escreval ("---------------------------")
fimalgoritmo
