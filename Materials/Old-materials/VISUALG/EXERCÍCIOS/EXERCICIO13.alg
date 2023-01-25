algoritmo "EXERCICIO13"
var
   Nome: Caractere
   VS, DC, NS: Real
inicio
        Escreval ("        - E M P R E S A -    ")
      Escreval ("----------------------------------")
      Escreva ("Nome: ")
      Leia (Nome)
      Escreval ("Quanto é o Seu Sálario Atual, ", Nome, "?")
      Escreva ("R$")
      Leia (VS)
      DC <- (15 * VS) / 100
      NS <- VS + DC
      Escreval ("----------------------------------")
      Escreval ("    - P R O C E S S A N D O -")
      Escreval ("----------------------------------")
      Escreval ("Sálario Atualizado Para:")
      Escreval ("R$", NS:5:2)
      Escreval ("----------------------------------")
      Escreval ("    == F I N A L I Z A D O ==")
fimalgoritmo
