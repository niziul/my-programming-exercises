algoritmo "EXERCICIO05"
//Programa q mostra a m�dia de duas nota, e mostra se o aluno t� aprovado ou n�o
var
   Nome: Caractere
   Nota1, Nota2, M, MD: Real
inicio
      Escreval ("  - N O T A   M � D I A -      ")
      Escreval ("---------------------------")
      Escreva ("Nome Do Aluno: ")
      Leia (Nome)
      Escreva ("1� Nota Do(a) ", Nome, ": ")
      Leia (Nota1)
      Escreva ("2� Nota Do(a) ", Nome, ": ")
      Leia (Nota2)
      Escreval ("  -- R E S U L T A D O -- ")
      M <- (Nota1 + Nota2) / 2
      Escreval ("M�dia: ", M:3:1)
      MD <- 7.0
      Se (M >= Md) entao
         Escreval ("Resultado: APROVADO")
      senao
           Escreval ("Resuldado: REPROVADO")
      FimSe
      Escreval (" == F I N A L I Z A D O ==")
fimalgoritmo
