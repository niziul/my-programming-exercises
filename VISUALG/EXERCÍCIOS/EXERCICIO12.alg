algoritmo "EXERCICIO12"
// Programa q aplicar 5% de desconto no produto.
var
   VP, PR, PRO: Real
inicio
      Escreval ("    - D E S C O N T A D O R -    ")
      Escreval ("----------------------------------")
      Escreval ("Qual é o Valor Do Produto?")
      Escreva ("R$")
      Leia (VP)
      PR <- (5 * VP) / 100
      PRO <- VP - PR
      Escreval ("----------------------------------")
      Escreval ("    - P R O C E S S A N D O -")
      Escreval ("----------------------------------")
      Escreval ("Preço Do Produto Com Desconto:")
      Escreval ("R$", PRO:5:2)
      Escreval ("----------------------------------")
      Escreval ("    == F I N A L I Z A D O ==")
fimalgoritmo
