var username= 'Ta Hoang Ha';
var elName=document.getElementById('userSign');
elName.textContent=username;

var title= username.length; /* Lấy ra độ dài của chuỗi biến username*/
var elTitle=document.getElementById('tiles')
elTitle.textContent=title;

var sub=70;
var elsub = document.getElementById('subTotal');
elsub.textContent=sub;

var ship=7;
var elship=document.getElementById('shipping');
elship.textContent=ship;

var total= sub + ship;
var eltol=document.getElementById('grandTotal');
eltol.textContent=total;



