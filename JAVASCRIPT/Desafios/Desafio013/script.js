function Enotas() {
    var nomeA = window.prompt("Qual é o nome do aluno?")
    var notaP = Number(window.prompt(`Informe a primeira nota de ${nomeA} no campo abaixo.`))
    var notaS = Number(window.prompt(`Informe a segunda nota de ${nomeA} no campo abaixo.`))

    var mediaA = (notaP + notaS) / 2

    if (mediaA >= 6.0) {
        //APROVADO
        Rssp.innerHTML = `${nomeA} foi aprovado com uma média de ${mediaA.toFixed(1)}`
    } else if (mediaA >= 3.0 && mediaA < 6.0) {
        //RECUPERAÇÃO
        Rssp.innerHTML = `${nomeA} está na recuperação com uma média de ${mediaA.toFixed(1)}`
    } else {
        //REPROVADO
        Rssp.innerHTML = `${nomeA} foi <mark>reprovado</mark> com uma média de ${mediaA.toFixed(1)}`
    }
}