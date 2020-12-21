let btnn = document.querySelector(".Btn")

function random(number) {
    return Math.floor(Math.random() * (number + 1))
}

btnn.onclick = function() {
    var rndCol = 'rgb(' + random(155) + ',' + random(155) + ',' + random(255) + ')';
    document.body.style.backgroundColor = rndCol;
} 