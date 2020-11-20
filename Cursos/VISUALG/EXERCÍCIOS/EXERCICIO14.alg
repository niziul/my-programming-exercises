algoritmo "EXERCICIO14"
var
   D: Inteiro
   K, VL, VLL, VT: Real
inicio
      Escreval ("       - L O C A D O R A -    ")
      Escreval ("----------------------------------")
      Escreval ("Informações Sobre o Aluguel Do Carro!")
      Escreval ("----------------------------------")
      Escreval ("__     I N F O R M A Ç Ô E S    __")
      Escreva ("Dias: ")
      Leia (D)
      Escreva ("Km: ")
      Leia (K)
      //DI <- 90
      //KM <- 0.20
      VL <- (90 * D)
      VLL <- (0.20 * K)
      VT <- VL + VLL
      Escreval ("----------------------------------")
      Escreval ("Valor: R$", VT:4:2)
      Escreval ("----------------------------------")
      Escreval ("    == F I N A L I Z A D O ==")
      Escreval ("----------------------------------")
fimalgoritmo
