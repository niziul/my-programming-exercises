algoritmo "EXERCICIO15"
// Programa q verifica quantos dias o funcion�rio trabalho � apresenta o s�lario
// a ser pago
var
   D, DI: Inteiro
   H, HR, VP: Real
inicio
      Escreval ("     - P A G A M E N T O S -    ")
      Escreval ("----------------------------------")
      Escreval ("Quantos Dias De Trabalho?")
      Escreval ("----------------------------------")
      Escreval ("__     I N F O R M A � � E S    __")
      Escreva ("Dias: ")
      Leia (D)
      DI <- 8
      HR <- (D * DI) * 25
      Escreval ("----------------------------------")
      Escreval ("Valor: R$", HR:4:2)
      Escreval ("----------------------------------")
      Escreval ("    == F I N A L I Z A D O ==")
      Escreval ("----------------------------------")
fimalgoritmo
