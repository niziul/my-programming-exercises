function veri() {
    var anoR = Number(window.prompt("Diga-me qual ano desejar verificar."))
    ress.innerHTML = `${anoR}`
    if (anoR % 4 == 0 && anoR % 100 != 0 || anoR % 400 == 0) {
        ress.style.backgroundColor = "#6ddb12ab";
        Bi.innerHTML = `O ano acima é bissexto.`
    } else {
        ress.style.backgroundColor = "#ff0033e7";
        Bi.innerHTML = `O ano acima não é bissexto.`
    }
}