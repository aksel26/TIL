$('.friend-bubble').addClass('.my-bubble')
$('#send').on('click',send)

function reset(){
    $('.my-bubble').removeClass('.bubble');
}
function send(){
    var msg = $('textarea').val();
    if(msg!=''){
        $('.chatbox').append('<div class="my-bubble bubble">' +msg + "</div>");
        $('#new-message').val('');
    }
}