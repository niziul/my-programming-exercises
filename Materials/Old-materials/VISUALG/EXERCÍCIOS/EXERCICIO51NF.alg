algoritmo "ProdutoOmaiorEOmenor"
var
   R, Rp: Inteiro
   Pd, Mp, Mep, MenorP: Real
inicio
      Repita
            Escreval (">>=======================<<")
            Escreval ("       > C A I X A <       ")
            Escreval ("---------------------------")
            Escreval ("Quer Cadrastra algum produto?")
            Escreval ("[1] Para Sim")
            Escreval ("[2] Para Não")
            Escreva  ("> ")
            Leia (R)
            LimpaTela
            Escolha R
                    Caso 1
                         Rp <- 1
                         Enquanto (Rp <= 8) faca
                                  Escreval (">>=======================<<")
                                  Escreval ("       > CADASTRO <        ")
                                  Escreval ("---------------------------")
                                  Escreval ("Preço Do Produto: ")
                                  Escreva ("> ")
                                  Leia (Pd)
                                  LimpaTela
                                  Se (Pd > Mp) entao
                                     Mp <- Pd
                                  Senao
                                       Mep <- Pd
                                  FimSe
                                  Se (Mep < MenorP) entao
                                     MenorP <- Mep
                                  FimSe
                                  Rp <- Rp + 1
                         FimEnquanto
                    Caso 2
                         Escreval (">>=======================<<")
                         Escreval ("Saindo...")
            FimEscolha
      Ate (R = "2")
fimalgoritmo
