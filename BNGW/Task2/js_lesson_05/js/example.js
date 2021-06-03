var list = document.getElementsByTagName('ul')[0]; /* tạo biến tên list truy vấn thẻ ul đầu tiên*/
var newItemLast = document.createElement('li'); /* tạo một biến tạo thêm phần tử li*/
var newTextLast = document.createTextNode('cream'); /* tạo biến tạo dữ liệu trong thẻ li đó*/
newItemLast.appendChild(newTextLast);
list.appendChild(newItemLast);

var newItemFirst = document.createElement('li');
var newTextFirst = document.createTextNode('kale');
newItemFirst.appendChild(newTextFirst)
list.insertBefore(newItemFirst,list.firstChild);

var listItems = document.querySelectorAll('li');

var i;
for (i=0;i<listItems.length;i++){
    listItems[i].className = 'cool';
}

var heading = document.querySelector('h2');
var headingText = heading.firstChild.nodeValue;
var totalItems = listItems.length;
var newHeading = headingText + '<span>' + totalItems + '</span>';
heading.innerHTML = newHeading;