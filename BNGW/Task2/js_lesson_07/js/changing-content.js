$(function (){
    $('li:contains("nuts")').text('almonds');
    $('li.hot').html(function (){
        return '<em>' + $(this).text() + '</em>';
        }
     );
    $('li#four').remove();
    }
);
