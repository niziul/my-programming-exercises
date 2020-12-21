algoritmo "semnome"
var
   R, Id, Qid, S, Qp21: Inteiro
   Res: Caractere
   M: Real
inicio
      Repita
            R <- 1
            Enquanto (R < 2) faca
                     Escreval (">>==================<<")
                     Escreval ("Diga-me a Sua Idade:")
                     Escreva ("> ")
                     Leia (Id)
                     Se (Id >= 21) entao
                        Qp21 <- Qp21 + 1
                     FimSe
                     R <- R + 1
                     Qid <- Qid + 1
                     S <- S + Id
            FimEnquanto
            Escreval ("---------------------<<")
            Escreval ("Quer Continuar? [S/N]")
            Escreva ("> ")
            Leia (Res)
            LimpaTela
      Ate (Res = "N")
      M <- S / Qid
      Escreval (">>========================================<<")
      Escreval ("              > INFORMAÇÕES <")
      Escreval ("------------------------------------------<<")
      Escreval ("Quantidade De Idade Registradas:", Qid)
      Escreval ("Quantidade De Pessoas Acima de 21 anos:", Qp21)
      Escreval ("Médias Das Idades:", M:3:1)
fimalgoritmo
