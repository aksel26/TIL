var audio = new Audio('../drum/audio/loop.mp3');

var first = new Audio('../drum/audio/1.wav');
var sec = new Audio('../drum/audio/2.wav');
var third = new Audio('../drum/audio/03_open_hihat.wav');
var fourth = new Audio('../drum/audio/04_clap.wav');
var fifth = new Audio('../drum/audio/05_snap.wav');
var sixth = new Audio('../drum/audio/06_crash.wav');
var seventh = new Audio('../drum/audio/07_tom1.wav');
var eighth = new Audio('../drum/audio/08_tom2.wav');
var ninth = new Audio('../drum/audio/09_tambourine.wav');



function play() {
  audio.play();
}
function stopMusic() {
  audio.pause();
  audio.currentTime = 0;
}

$('#play-btn').on('click', play);
$('#stop-btn').on('click', stopMusic);

// 키보드 이벤트 핸들링
$(document).on('keydown', function (event) {
  $('#cell' + event.key).addClass('playing');
  switch (event['key']) {
    case '1':
    first.currentTime=0;
      first.play();
      
    case '2':
    sec.currentTime=0;
      sec.play();
      
    case '3':
    third.currentTime=0;
      third.play();
      
    case '4':
    fourth.currentTime=0;
      fourth.play();
      
    case '5':
    fifth.currentTime=0;
      fifth.play();
      
    case '6':
    sixth.currentTime=0;
      sixth.play();
      
    case '7':
    seventh.currentTime=0;
      seventh.play();
      
    case '8':
    eighth.currentTime=0;
      eighth.play();
      
    case '9':
    ninth.currentTime=0;
      ninth.play();
      

  }
});


$(document).on('keyup', function (event) {
  $('#cell' + event.key).removeClass('playing');
})