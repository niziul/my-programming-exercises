algoritmo "EXERCICIO36"
var
   PM, HDA: Inteiro
   PPH1, PPH2, PPH3, TED1, TED2, TED3: Real
inicio
      Escreval ("        - P R O M O Ç Ã O -       ")
      Escreval ("----------------------------------")
      Escreval ("DESEJA PARTICIPAR DE UMA PROMOÇÃO,")
      Escreval ("ONDE VOCÊ GANHA PONTOS POR CADA HORA")
      Escreval ("DE ATIVIDADE FISÍCA, E PODE TROCAR OS")
      Escreval ("PONTOS POR DINHEIRO?")
      Escreval ("----------------------------------")
      Escreval ("[1] Para Aceitar.")
      Escreval ("[2] Para Negar.")
      Escreva  ("Digite Aqui: ")
      Leia (PM)
      Escreval ("----------------------------------")
      Escolha PM
              Caso 1
                   Escreval ("Quantas horas de atividade nesse mês?")
                   Escreva  ("Digite aqui: ")
                   Leia (HDA)
                   PPH1 <- HDA * 2
                   PPH2 <- HDA * 5
                   PPH3 <- HDA * 10
                   TED1 <- PPH1 * 0.05
                   TED2 <- PPH2 * 0.05
                   TED3 <- PPH3 * 0.05
                   Se (HDA < 10) entao
                      Escreval ("----------------------------------")
                      Escreval ("      - P R O C E S S A N D O -   ")
                      Escreval ("----------------------------------")
                      Escreval ("Pontos: ", PPH1)
                      Escreval ("Valor Em Dinheiro: R$", TED1:4:2)
                   senao
                        Se (HDA >= 10) e (HDA < 20) entao
                           Escreval ("----------------------------------")
                           Escreval ("      - P R O C E S S A N D O -   ")
                           Escreval ("----------------------------------")
                           Escreval ("Pontos: ", PPH2)
                           Escreval ("Valor Em Dinheiro: R$", TED2:4:2)
                        senao
                             Escreval ("----------------------------------")
                             Escreval ("      - P R O C E S S A N D O -   ")
                             Escreval ("----------------------------------")
                             Escreval ("Pontos: ", PPH3)
                             Escreval ("Valor Em Dinheiro: R$", TED3:4:2)
                        FimSe
                   FimSe
              Caso 2
                   Escreval ("Poxa! Ta bom, tchau. :(")
      FimEscolha
      Escreval ("----------------------------------")
      Escreval ("      == F I N A L I Z A D O ==   ")
      Escreval ("----------------------------------")
fimalgoritmo
