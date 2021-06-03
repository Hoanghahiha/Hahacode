var price = 5;
var quanity = 14;
var total = price * quanity;

/*
var price, quantity,total;
price=5;
quantity=14;
total=price*quantity;
*/

// var price=5, quantity=14;
// var  total=price*quanity;
var el = document.getElementById('cost');
el.textContent= '$' + total;