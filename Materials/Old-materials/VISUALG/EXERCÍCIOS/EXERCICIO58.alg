algoritmo "semnome"
var
   R, Id, QdA, Sid: Inteiro
   Mid: Real
inicio
      R <- 1
      Repita
            Escreval (">>===================<<")
            Escreval ("        > TURMA <      ")
            Escreval (">>-------------------<<")
            Escreval ("Idade Do", R,"° Alunos:")
            Escreva ("> ")
            Leia (Id)
            Se (Id < 999) entao
               QdA <- QdA + 1
            FimSe
            Sid <- Sid + Id
            R <- R + 1
            LimpaTela
      Ate (Id = 999)
      Mid <- (Sid - 999) / QdA
      Escreval (">>===================<<")
      Escreval ("    > INFORMAÇÕES <   ")
      Escreval (">>-------------------<<")
      Escreval ("Quantidade De Alunos:", QdA)
      Escreval ("Média Da Idade: ", Mid:3:1)
fimalgoritmo
