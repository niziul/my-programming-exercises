algoritmo "EXERCICIO23"
var
   Nome: Caractere
   PD, DSM, DSH, DH, DM: Real
   Sexo: inteiro
inicio
      Escreval ("    - D E S C O N T Ã O -    ")
      Escreval ("-----------------------------")
      Escreva ("Nome: ")
      Leia (Nome)
      Escreval ("Diga Seu Sexo: ")
      Escreval ("(1) Para Mulher.")
      Escreval ("(2) Para Homens.")
      Escreva ("Digite aqui: ")
      Leia (Sexo)
      Escreva ("Preço Do Produtor: ")
      Leia (PD)
      DSM <- (PD * 15) / 100
      DSH <- (PD * 5) / 100
      DH <- PD - DSH
      DM <- PD - DSM
      Escreval ("-----------------------------")
      Escreval ("   - P R O C E S S A N D O -")
      Escreval ("-----------------------------")
      Se (Sexo = 2) entao
         Escreval ("Preço Com Desconto De 5%: ", DH:3:2)
      senao
           Escreval ("Preço Com Desconto de 15%: ", DM:3:2)
      FimSe
      Escreval ("-----------------------------")
      Escreval ("   == F I N A L I Z A D O ==")
      Escreval ("-----------------------------")
fimalgoritmo
