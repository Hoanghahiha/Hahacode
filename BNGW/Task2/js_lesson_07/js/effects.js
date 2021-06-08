$(function (){
    $('h2').hide().slideUp();
    var $li = $('li');
    $li.hide().each(function (index){
        $(this).delay(900*index).fadeIn(1700);
        }
    );

    $li.on('click', function (){
        $(this).fadeOut(1700);
        }
    );
    }
);