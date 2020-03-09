$('#even-btn').on('click',evenNum);
$('#odd-btn').on('click',oddNum);

function evenNum(){
    $('.card').removeClass('selected');

    $('.card').each(function(){
    if(Number($(this).text())%2==0){
        $(this).addClass('selected');
    };
})
};

function oddNum(){
    $('.card').removeClass('selected');

    $('.card').each(function(){
    if(Number($(this).text())%2==1){
        $(this).addClass('selected');
    };
})
};