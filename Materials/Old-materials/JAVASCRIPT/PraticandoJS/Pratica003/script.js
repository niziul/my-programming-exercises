function Pbtn() {
    let Nin = document.querySelector('.Ipp01')
    let Nfim = document.querySelector('.Ipp02')
    let Npass = document.querySelector('.Ipp03')
    let resp = document.querySelector('.TextC')

    if (Nin.value.length == 0 || Nfim.value.length == 0 || Npass.value.length == 0){
         resp.innerHTML = `Brow, é preciso de uns dados ae pro programa contar! \u{1F612}\u{1F44A}`
    } else {
        resp.innerHTML = ''
        let i = Number(Nin.value)
        let f = Number(Nfim.value)
        let p = Number(Npass.value)
        if (p <= 0) {
            window.alert('Buguei aqui, como que cê quer que eu passe o bagulho se tu colocar zero? deixa, vou considerar que tu quis dizer um, suave.')
             p = 1
        }

        if (i < f) {
            //Contagem crescente
            for (let c = i; c <= f; c += p){
                resp.innerHTML += ` ${c} \u{27A1}`
            }  
        } else {
            //Contagem regressiva
            for (let c = 1; c >= f; c += p) {
                resp.innerHTML += ` ${c} \u{27A1}`
            }
        }
    }
}