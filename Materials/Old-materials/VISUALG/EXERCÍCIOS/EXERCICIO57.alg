algoritmo "semnome"
var
   Sx, Res: Caractere
   Sl, SlM, SlH: Real
inicio
      Repita
            Escreval (">>==================<<")
            Escreval ("     > SAL�RIOS <     ")
            Escreval (">>------------------<<")
            Escreval ("Sexo: [M/H]")
            Escreva ("> ")
            Leia (Sx)
            Escreval ("--------------------<<")
            Escreva  ("Sal�rio: ")
            Leia (Sl)
            Se (Sx = "M") entao
               SlM <- SlM + Sl
            senao
                 Se (Sx = "H") entao
                    SlH <- SlH + Sl
                 FimSe
            FimSe
            Escreval ("--------------------<<")
            Escreval ("Quer Continuar? [S/N]")
            Escreva ("> ")
            Leia (Res)
            LimpaTela
      Ate (Res = "N")
      Escreval (">>==========================<<")
      Escreval ("        > INFORM��ES <    ")
      Escreval (">>--------------------------<<")
      Escreval ("Valor Total Pago As Mulheres:")
      Escreval ("> R$", SlM:5:2)
      Escreval ("----------------------------<<")
      Escreval ("Valor Total Pago Aos Homens:")
      Escreval ("> R$", SlH:5:2)
      Escreval (">>==========================<<")
fimalgoritmo
