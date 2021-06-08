function checkUsername() { /*tạo một hàm checkusername*/
    var elMsg = document.getElementById('feedback'); /*đặt một biến gọi ra giá trị id tên feedback*/
    var elUsername = document.getElementById('username'); /*đặt một biến gọi ra giá trị id tên username*/
    if (elUsername.value.length < 5){ /*nếu giá trị của của biến username lớn hơn 5*/
        elMsg.textContent = 'Username must be 5 characters or more'; /*Hiển thị*/
    } else {
        elMsg.textContent = '';
    }
}