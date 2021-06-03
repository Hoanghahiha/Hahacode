var startItem = document.getElementById('two');
var prevItem = startItem.previousSibling;
var nextItem = startItem.nextSibling;

prevItem.className = 'Completed';
nextItem.className = 'cool';