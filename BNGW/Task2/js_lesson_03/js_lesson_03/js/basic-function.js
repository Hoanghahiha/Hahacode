var msg = 'Sign up to receive our newsletter for 10% off';
function  updateMessage(){/* tên hàm*/
    var el = document.getElementById('message');
    el.textContent = msg;
}
updateMessage();/* gọi hàm, tên hàm trùng với tên được định nghĩa và được truyền tham số*/