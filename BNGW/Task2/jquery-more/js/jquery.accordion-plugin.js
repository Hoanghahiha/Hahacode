(function ($){
    $.fn.accordion = function (speed){
        this.on('click', '.accordion-control', function (e){
            e.preventDefault();
            $(this)
                .next('.accordion-panel')
                .not(':animated')
                .slideToggle(40);
        });
        return this;
    };
}(jQuery));