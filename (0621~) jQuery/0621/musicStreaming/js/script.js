
function scrollHandler(){
    var windowBottom = $(window).scrollTop() + $(window).height();
    
    // 모든 playlist를 하나씩 살펴보고
    //  그 playlist의 중간 지점의 좌표가 windowBottom보다 작으면
    //     그 playlist를 보이게 해라

    var playlists = $('.playlist');

    $('.playlist').each(function(){
        var playlistHalf = $(this).position().top + $(this).outerHeight()/2;
        if(playlistHalf < windowBottom) {
            $(this).animate({'opacity':'1'},1500);
        }
    })

//     for (var i = 0 ; i< playlists.length ; i++){
//         var playlist = $(playlists[i]);
//         var playlistHalf = playlist.position().top + playlist.outerHeight()/2;
//         if(playlistHalf < windowBottom) {
//             playlist.animate({'opacity':'1'},1500);
//         }
        
//     }
}


function topBtn(){
    var windowBottom = $(window).scrollTop() + $(window).height();
    var playlists = $('.playlist');
    var playlistHalf = playlists.position().top + playlists.outerHeight()/2;
    // console.log(typeof($(window).scrollTop()));
    if(windowBottom>playlistHalf){
        $('.to-top-btn').fadeIn(1000);
        console.log($(document).scrollTop())
    }
    if($(window).scrollTop()==0){
        $('.to-top-btn').fadeOut(1000);
    }
}

function topBtnClick(){
    $('html,body').animate({scrollTop:0},500);
}

$(window).on('scroll',scrollHandler);
$(window).on('scroll',topBtn);
$('.to-top-btn').on('click',topBtnClick);


//처음 페이지 로딩될 때 호출
scrollHandler();