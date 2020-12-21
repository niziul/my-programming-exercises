algoritmo "semnome"
var
   R, A: Inteiro
   Res1, Res2: Inteiro
   Res3: Caractere
inicio
      Repita
            A <- Randi (10) + 1
            Escreval (">>===================<<")
            Escreval ("   > Tente Acertar <   ")
            Escreval (">---------------------<")
            Escreval ("Sortendo...")
            Escreval ("- ", A)
            Escreval (">---------------------<")
            Escreval ("Quer Tentar Acerta?")
            Escreval ("[1] Para Tentar")
            Escreval ("[2] Para Sair")
            Escreva ("> ")
            Leia (Res1)
            LimpaTela
      Ate (Res1 = "1")
      LimpaTela
      Escolha Res1
                  Caso 1
                  Repita
                        Para R <- 1 ate 4 faca
                             Escreval (">>===================<<")
                             Escreval ("   > Tente Acertar <   ")
                             Escreval (">---------------------<")
                             Escreval ("Tente Acertar Qual Vai ")
                             Escreval ("Ser O Proximo Número:")
                             Escreval ("---------------------<<")
                             Escreval (R,"° tentativa:")
                             Escreva ("> ")
                             Leia (Res2)
                             Escreval (">---------------------<")
                             Escreval ("      > Sorteado <     ")
                             Escreval (">---------------------<")
                             A <- Randi (10) + 1
                             Escreval ("- ", A)
                             Escreval (">---------------------<")
                             Escreval ("Quer Tentar Novamente? [S/N]")
                             Escreva ("> ")
                             Leia (Res3)
                             LimpaTela
                        FimPara
                  Ate (Res3 = "N")
                  Caso 2
                       Escreval (">>===================<<")
                       Escreval ("Saindo...")
      FimEscolha
fimalgoritmo
