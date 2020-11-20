algoritmo "EXERCICIO24"
var
   Km, KP, KPA: Real
inicio
      Escreval ("    - P A S S A G E M -    ")
      Escreval ("---------------------------")
      Escreval ("Quantos Km Deseja Percorrer nessa viagem")
      Escreva ("Km: ")
      Leia (Km)
      Escreval ("---------------------------")
      KP <- Km * 0.50
      KPA <- Km * 0.45
      Se Km <= 200 entao
         Escreval ("Preço Da Passagem: ", KP:3:2)
      senao
           Escreval ("Preço Da Passagem Acima de 200Km: ", KPA:3:2)
      FimSe
      Escreval ("---------------------------")
      Escreval (" - P R O C E S S A N D O -")
      Escreval ("---------------------------")
fimalgoritmo
