var itemTwo = document.getElementById('two'); /*lấy ra phần tử có id là two*/
var elText = itemTwo.firstChild.nodeValue;/*chỉ định lấy ra một node của con thứ nhất*/
elText = elText.replace('pine nuts', 'kale');/*thay thế nội dung text của node vừa chọn*/
itemTwo.firstChild.nodeValue=elText;/*Update content*/
