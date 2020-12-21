var idade = 67
console.log(`Voce tem ${idade}.`)
if (idade < 16) {
    console.log("Não vota!")
} else {
    if (idade < 18 || idade > 65) {
        console.log("Voto opcional")
    } else { 
        if (idade >= 18) {
            console.log("Voto obrigatório")
        }
    }
}