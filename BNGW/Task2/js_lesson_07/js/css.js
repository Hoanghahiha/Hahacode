$(function (){
    var backgroundColor = $('li').css('background-color');

    $('ul').append('<p>Color was: ' + backgroundColor + '</p>');

    $('li').css({
        'background-color': '#c5a996',
        'boder': '1px solid #fff',
        'color': '#000',
        'text-shadow': 'none',
        'font-family': 'Geogia',
        'padding-left': '+=75',
    });
    }
);