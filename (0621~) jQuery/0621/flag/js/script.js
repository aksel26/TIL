function blueDown(){
    $('.blue').addClass('down');
    setTimeout(reset,500);
}

function whiteDown(){
    $('.white').addClass('down');
    setTimeout(reset,500);
}

function dotDown(){
    $('.blue.dot').addClass('down');
    setTimeout(reset,500);
}

$('#btn1').on('click',blueDown);
$('#btn2').on('click',whiteDown);
$('#btn3').on('click',dotDown);



function reset(){
    $('.flag').removeClass('down');
}

