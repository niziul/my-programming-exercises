algoritmo "semnome"
var
   C, NA5, ND3: inteiro
   R: caractere
inicio
      Escreval (">>---------=====---------<<")
      Escreval ("    > S O R T E N D O <    ")
      Escreval ("같같같같같같같같같같같같같�")
      Escreva ("> ")
      Repita
            C <- 2
            Enquanto (C <= 10) faca
                     Escreva (C)
                     C <- C + 2
                       Se (C > 5) entao
                          NA5 <- NA5 + 1
                       FimSe
                       Se (C % 3 = 0) entao
                          ND3 <- ND3 + 1
                       FimSe
            FimEnquanto
            Escreval
            Escreval ("---------------------------")
            Escreval ("Deseja continuar? [S/N]")
            Escreva  ("> ")
            Leia (R)
            LimpaTela
      Ate (R = "N")
      Escreval (">>---------=====---------<<")
      Escreval ("N�meros Acima De 5: ", NA5)
      Escreval ("N�meros Divis�veis Por 3: ", ND3)
fimalgoritmo
