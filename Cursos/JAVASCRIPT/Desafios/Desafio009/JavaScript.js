function ReajS() {
    let nomeF = window.prompt("Qual é o nome do funcionário?")
    let salF = Number(window.prompt(`Qual é o salário de ${nomeF}?`))
    let reaJ = Number.parseInt(window.prompt(`O salário de ${nomeF} vai ser reajustado em qual porcentagem?`))

    let SalaR = salF * reaJ%

    SalA.innerHTML = `${SalaR}`
}