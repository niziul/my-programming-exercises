algoritmo "semnome"
var
   N, NPar, NImpar: inteiro
   R: Caractere
inicio
      Repita
            Repita
                  Escreval (">>==========================<<")
                  Escreva ("Digite um n�mero: ")
                  Leia (N)
                  Escreval ("������������������������������")
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
            Escreval ("N�meros Pares: ", NPar)
            Escreval ("N�meros Impares: ", NImpar)
            Escreval ("������������������������������")
            Escreval ("Quer Recome�ar? [S/N]")
            Escreva ("> ")
            Leia (R)
            LimpaTela
      Ate (R = "N")
      Escreval (">>==========================<<")
      Escreval ("Saindo...")
fimalgoritmo
