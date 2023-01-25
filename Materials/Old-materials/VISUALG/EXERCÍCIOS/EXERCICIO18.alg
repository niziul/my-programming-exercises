algoritmo "EXERCICIO18"
var
   Ano, Idade: inteiro
inicio
      Escreval ("        - V O T A Ç Ã O - ")
      Escreval ("---------------------------------")
      Escreval ("Informe Sua Data De Nascimento, ")
      Escreval ("Para a Confirmação Do Voto:")
      Escreva ("ANO: ")
      Leia (Ano)
      Idade <- 2020 - Ano
      Escreval ("---------------------------------")
      Escreval ("       P R O C E S S A N D O    ")
      Escreval ("---------------------------------")
      Se (Idade >= 18)entao
         Escreval ("IDADE: ", Idade)
         Escreval ("STATUS: Voto Confirmado!")
      senao
           Escreval ("IDADE: ", Idade)
           Escreval ("STATUS: Voto Negado.")
           Escreval ("---------------------------------")
           Escreval ("Infelismente Você é Menor De Idade,")
           Escreval ("e está Inaptor a Votação.")
      FimSe
      Escreval ("---------------------------------")
      Escreval ("   == F I N A L I Z A D O ==")
fimalgoritmo
