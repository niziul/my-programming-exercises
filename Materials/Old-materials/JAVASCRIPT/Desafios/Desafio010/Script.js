function Calc() {
    var valorA = Number(window.prompt("Qual é o valor de a?"))
    var valorB = Number(window.prompt("Qual é o valor de b?"))
    var valorC = Number(window.prompt("Qual é o valor de c?"))
    
    var delta = (valorB * valorB) - 4 * valorA * valorC

    txt.innerHTML = `Resultado`
    equaA.innerHTML = `${valorA}x² + ${valorB}x + ${valorC} = 0`
    calA.innerHTML = `&Delta; = ${valorB}² - 4 . ${valorA} . ${valorC}`
    valorQ.innerHTML = `&Delta; = ${delta}`
}