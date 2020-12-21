algoritmo "MédiaIdade02"
var
   Sx: Caractere
   R, Id, Qh, Qm, MeM, Sh, Mg: inteiro
   MidH, MEg: Real
inicio
      R <- 1
      Enquanto (R <= 5) faca
               Escreval (">>====================<<")
               Escreval ("       ID  PESSOAS      ")
               Escreval ("----------------------<<")
               Escreval  ("Qual o Sexo? [H/M]")
               Escreva  ("> ")
               Leia (Sx)
               Escreva  ("Qual a Idade: ")
               Leia (Id)
               LimpaTela
               Se (Sx = "H") entao
                  Qh <- Qh + 1
               senao
                    Qm <- Qm + 1
               FimSe
               Se (Sx = "M") e (Id >= 20) entao
                  MeM <- MeM + 1
               FimSe
               Se (Sx = "H") entao
                  Sh <- Sh + Id
               FimSe
               Mg <- Mg + id
               R <- R + 1
      FimEnquanto
      MidH <- Sh / Qh
      MEg <- Mg / 5
      Escreval (">>====================<<")
      Escreval ("     > ESTATICICAS <    ")
      Escreval ("----------------------<<")
      Escreval ("Quantidade De Homens Cadrastrado: ", Qh)
      Escreval ("Quantidade De Mulheres Cadrastrada: ", Qm)
      Escreval ("Quantidade De Mulheres Com Mais De 20 anos: ", MeM)
      Escreval ("Média De Idade Dos Homens: ", MidH:3:0, " Anos")
      Escreval ("Media Do Grupo: ", MEg:3:0, " Anos")
fimalgoritmo
