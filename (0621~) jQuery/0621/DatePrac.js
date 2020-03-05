var birthdayData = [
    '20010309전소미',
    '19960828김세정',
    '19991112최유정',
    '19960209김청하',
    '19990719김소혜',
    '19981216주결경',
    '19971201정채연',
    '19991204김도연',
    '19991204강미나',
    '19951218임나영',
    '19990803유연정'
  ];
  // 내가 한 것.
  function printMinors(arr) {
      console.log("미성년자 명단:");
    var date = new Date('2017-01-01');
    
    for(var i = 0 ; i<arr.length ; i++){
        if(Number(date.getFullYear()) - Number(birthdayData[i].substring(0,4))<20){
            console.log(birthdayData[i]);
        }
    }
  }


  // 해설
  function printMinors(arr) {
    console.log("미성년자 명단:");

    for(var i = 0; i < arr.length; i++){
        if(Number(arr[i].substr(0, 4)) > 1998){
            console.log(arr[i]);
        }
    }
}
  
  // 테스트 코드
  printMinors(birthdayData);