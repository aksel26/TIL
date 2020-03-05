// 주어진 단어(word)에 특정 알파벳(ch)이 몇 번 들어가는지 세어주는 함수
function countCharacter(word, ch) {
    var count = 0;
    var UpperWord = word.toUpperCase();
    for(var i = 0 ; i<UpperWord.length ; i++){

        if(UpperWord.charAt(i)==ch){
            count++;
        }
    }

    return count;
}

// 단어 word에 알파벳 'A'가 몇 번 나오는지 세어주는 함수
// var count1=0;
function countA(word) {
    
    //방법1. 만들기
    
    // for(var i = 0 ; i<word.length ; i ++){
    //     if(word.charAt(i)=='a' || word.charAt(i)=='A'){
    //         count1++;
    //     }
    // }
    // return count1;
    
    
    //방법 2. 이미 만든 위의 함수를 활용
    return countCharacter(word,'A');
}


// 테스트 코드
console.log(countCharacter('AbaCedEA', 'E'));
console.log(countCharacter('AbaCedEA', 'X'));
console.log(countA('AbaCedEA'));