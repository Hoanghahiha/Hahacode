var elements = document.getElementsByClassName('hot'); /* đặt một biến lấy ra giá trị của một class tên 'hot'*/
/* có 3 class 'hot' nên length của element = 3, lớn hơn 3 thì ì dưới không có giá trị*/
if (elements.length > 2){ /* Nếu giá trị của biến lớn hơn 2*/
    var el = elements[1]; /* đặt biến el bằng giá trị phần tử thứ nhất của mảng*/
    el.className = 'cool';/* đổi tên class biến el thành cool*/
}