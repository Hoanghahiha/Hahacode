function getArea(width,height){/* tên hàm đã được truyền tham số*/
    var el = document.getElementById('message');
    el.textContent = "Area is " + width*height;
}
getArea(3,5);/* gọi hàm*/