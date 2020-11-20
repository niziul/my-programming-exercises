algoritmo "MédiaDeIdade"
var
   Id, Rp, Soma, I18, I5, Mid: Inteiro
   M: Real
inicio
      Soma <- Soma
      Rp <- 1
      Enquanto (Rp <= 10) faca
               Escreval (">>===================<<")
               Escreval ("       > IDADE <       ")
               Escreval ("---------------------<<")
               Escreval ("Digite a", Rp,"° idade:")
               Escreva  ("> ")
               Leia (Id)
               LimpaTela
               Se (Id >= 18) entao
                  I18 <- I18 + 1
               FimSe
               Se (Id <= 5) entao
                  I5 <- I5 + 1
               FimSe
               Se (Id > Mid) entao
                  Mid <- Id
               FimSe
               Soma <- Soma + Id
               Rp <- Rp + 1
      FimEnquanto
      M <- Soma / 10
      Escreval (">>===================<<")
      Escreval ("    > ESTATICICAS <    ")
      Escreval ("---------------------<<")
      Escreval ("Média de idade: ", M:3:1)
      Escreval ("Quantidades de pessoas acima de 18 anos: ", I18)
      Escreval ("Quantidades de pessoas abaixo de 5 anos: ", I5)
      Escreval ("A Maior idade do grupo: ", Mid)
      Escreval (">>-------------------<<")
fimalgoritmo
