var el = document.querySelector('li.hot');  /* chọn một phần tử đầu tiên*/
el.className = 'cool';

var els = document.querySelectorAll('li.hot'); /* Chọn tất cả các phần tử*/
els[1].className = 'cool';