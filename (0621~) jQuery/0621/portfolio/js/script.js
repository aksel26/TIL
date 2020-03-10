

function scroll(){
    
    if($(window).scrollTop()>=$('.about').position().top){
        
        $('.menu-right button').css('color','#4A4A4A');
        
    }else{
        $('.menu-right button').css('color','white');
        
    }

    // 각 섹션을 보고 
    //     현재 스크롤 위치가 그 섹션보다 아래에 있으면 
    //         그 섹션의 vertical-center를 animation시켜라
    $('section').each(function(){
        if($(window).scrollTop() >= $(this).position().top){
            
            $(this).find('.vertical-center').animate({opacity:"1",top:"0"},600);
        }
    })
}



$(window).on('scroll',scroll);

//페이지 처음 로딩될 때
scroll();

$('.menu-right button').on('click',function(){
  var id = $(this).attr('id');
  if(id=="about-btn"){
    $('html,body').animate({scrollTop:$('.about').position().top},500)
  }else if(id=="contact-btn"){
    $('html,body').animate({scrollTop:$('.contact').position().top},500)
  }
})



// function about(){
//     $('html,body').animate({scrollTop:$('.about').position().top},500)
//     $('.menu-right button').css('color','#4A4A4A');
// }
// function contact(){
//     $('html,body').animate({scrollTop:$('.contact').position().top},500)
//     $('.menu-right button').css('color','#4A4A4A');
// }

// $('#about-btn').on('click',about);
// $('#contact-btn').on('click',contact);
