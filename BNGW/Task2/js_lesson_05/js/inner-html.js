var firstItem = document.getElementById('one');

var itemContent = firstItem.innerHTML;

firstItem.innerHTML = itemContent + '<a href=\"http://example.org\">' + '</a>';