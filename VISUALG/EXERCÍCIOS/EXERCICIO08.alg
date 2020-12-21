algoritmo "EXERCICIO08"
var
   deca, hect, quil, dec, cent, mil, MD: Real
inicio
      Escreval ("     - M E D I D A S -  ")
      Escreval ("---------------------------")
      Escreva ("Digite Uma Distância Em Mêtros: ")
      Leia (MD)
      deca <- MD / 10
      hect <- MD / 100
      quil <- MD / 1000
      dec <- MD * 10
      cent <- MD * 100
      mil <- MD * 1000
      Escreval ("---------------------------")
      Escreval (" - P R O C E S S A N D O -  ")
      Escreval ("...")
      Escreval ("---------------------------")
      Escreval ("Distância digitada: ", MD)
      Escreval ("---------------------------")
      Escreval ("  - C O N V E R T I D A - ")
      Escreval ("---------------------------")
      Escreva (mil:9:1, "mm")
      Escreval ("  |  ", quil, "Km")
      Escreva (cent:8:1, "cm")
      Escreval ("   |  ", hect, "Hm")
      Escreva (dec:7:1, "dm")
      Escreval ("    |  ", quil, "Dam")
      Escreval ("---------------------------")
      Escreval ("          F")
      Escreval ("             I")
      Escreval ("                M")
      Escreval ("---------------------------")
fimalgoritmo
