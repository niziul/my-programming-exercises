algoritmo "EXERCICIO37"
var
   R, TNEM, TNEH: inteiro
   NomeM, NomeH: Caractere
   SM, SLT1, SLT2, SLT3: Real
   SH, SLTH1, SLTH2, SLTH3: Real
inicio
      Escreval ("     - E M P  A U M E N T O -     ")
      Escreval ("----------------------------------")
      Escreval ("OLÁ, ESTAMOS FAZENDO UM REAJUSTE NO")
      Escreval ("SALÁRIO DOS NOSSO FUNCIONARIO, MAS ANTES")
      Escreval ("PRECISAMOS DE ALGUMAS INFORMAÇÕES, CERTO?")
      Escreval ("----------------------------------")
      Escreval ("Informe-nos o seu sexo: ")
      Escreval ("[1] Para Mulher.")
      Escreval ("[2] Para Homem")
      Escreva  ("Digite aqui: ")
      Leia (R)
      Escreval ("----------------------------------")
      Escolha R
              Caso 1
                   Escreval ("Qual seu atual salário?")
                   Escreva  ("Digite aqui: R$")
                   Leia (SM)
                   Escreval ("----------------------------------")
                   Escreval ("Qual Seu Nome?")
                   Escreva  ("Digite aqui: ")
                   Leia (NomeM)
                   Escreval ("----------------------------------")
                   Escreval ("A Quanto Tempo Está Na Empresa?")
                   Escreva  ("Digite aqui: ")
                   Leia (TNEM)
                   SLT1 <- ((SM * 5) /100) + SM
                   SLT2 <- ((SM * 12) /100) + SM
                   SLT3 <- ((SM * 23) /100) + SM
                   Escreval ("----------------------------------")
                   Escreval ("      - P R O C E S S A N D O -   ")
                   Escreval ("----------------------------------")
                   Se (TNEM < 15) entao
                      Escreval ("Nome: ", NomeM)
                      Escreval ("Salário Reajustado: ", SLT1:4:2)
                   senao
                        Se (TNEM >= 15) e (TNEM < 20)entao
                           Escreval ("Nome: ", NomeM)
                           Escreval ("Salário Reajustado: ", SLT2:4:2)
                        senao
                             Escreval ("Nome: ", NomeM)
                             Escreval ("Salário Reajustado: ", SLT3:4:2)
                        FimSe
                   FimSe
              Caso 2
                   Escreval ("Qual seu atual salário?")
                   Escreva  ("Digite aqui: R$")
                   Leia (SH)
                   Escreval ("----------------------------------")
                   Escreval ("Qual Seu Nome?")
                   Escreva  ("Digite aqui: ")
                   Leia (NomeH)
                   Escreval ("----------------------------------")
                   Escreval ("A Quanto Tempo Está Na Empresa?")
                   Escreva  ("Digite aqui: ")
                   Leia (TNEH)
                   SLTH1 <- ((SH * 3) /100) + SH
                   SLTH2 <- ((SH * 13) /100) + SH
                   SLTH3 <- ((SH * 25) /100) + SH
                   Escreval ("----------------------------------")
                   Escreval ("      - P R O C E S S A N D O -   ")
                   Escreval ("----------------------------------")
                   Se (TNEH < 20) entao
                      Escreval ("Nome: ", NomeH)
                      Escreval ("Salário Reajustado: ", SLTH1:4:2)
                   senao
                        Se (TNEH >= 20) e (TNEH < 30)entao
                           Escreval ("Nome: ", NomeH)
                           Escreval ("Salário Reajustado: ", SLTH2:4:2)
                        senao
                             Escreval ("Nome: ", NomeH)
                             Escreval ("Salário Reajustado: ", SLTH3:4:2)
                        FimSe
                   FimSe
      FimEscolha
      Escreval ("----------------------------------")
      Escreval ("      == F I N A L I Z A D O ==   ")
      Escreval ("----------------------------------")
fimalgoritmo
