function checkUsername() {
    var elMsg = document.getElementById('feedback'); /*đặt một biến tham chiếu đến id feedback*/
    if (this.value.length < 5){
        elMsg.textContent = "Username must be 5 characters or more";
    }else {
        elMsg.textContent = '';
    }
}

var elUsername = document.getElementById('username'); /*đặt biến username tham chiếu đến id username*/
elUsername.onblur = checkUsername; /*onblur*/