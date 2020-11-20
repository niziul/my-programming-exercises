algoritmo "semnome"
var
   N, NPar, NImpar: inteiro
   R: Caractere
inicio
      Repita
            Repita
                  Escreval (">>==========================<<")
                  Escreva ("Digite um número: ")
                  Leia (N)
                  Escreval ("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°")
                  Escreval ("Quer continuar? [S/N]")
                  Escreva  ("> ")
                  Leia (R)
                  Se (N % 2 = 0) entao
                     NPar <- NPar + 1
                  senao
                       NImpar <- NImpar + 1
                  FimSe
                  LimpaTela
            Ate (R = "N")
            Escreval (">>==========================<<")
            Escreval ("Números Pares: ", NPar)
            Escreval ("Números Impares: ", NImpar)
            Escreval ("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°")
            Escreval ("Quer Recomeçar? [S/N]")
            Escreva ("> ")
            Leia (R)
            LimpaTela
      Ate (R = "N")
      Escreval (">>==========================<<")
      Escreval ("Saindo...")
fimalgoritmo
