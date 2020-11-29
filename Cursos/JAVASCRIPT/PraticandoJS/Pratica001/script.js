function carregar() {
    var msg = window.document.getElementById("msg")
    var img = window.document.getElementById("imagem_manha")
    var data = new Date()
    var hora = data.getHours()
    msg.innerHTML = `Agora são ${hora} horas.`
    if (hora >= 0 && hora < 12) {
        //BOM DIA!!
        img.src = "imagens/manha.png"
        document.body.style.background = '#da836f'
    } else if (hora >= 12 && hora <= 18) {
        //BOA TARDE!!
        img.src = "imagens/tarde.png"
        document.body.style.background = '#ff8c40'
    } else {
        //BOA NOITE!!
        img.src = "imagens/noite.png"
        document.body.style.background = '#224064'
    }
}