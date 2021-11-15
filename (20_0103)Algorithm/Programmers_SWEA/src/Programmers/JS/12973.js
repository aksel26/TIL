
function solution(s) {
    let answer = -1;
    // let input = [...s]


    let st = [];

    for (let i = 0; i < s.length; i++) {
        if( (st.length === 0) || st[st.length  - 1] !== s[i]){
            st.push(s[i])

        }else{
            st.pop();
        }
        
    }

    if(st.length === 0 ){
        answer = 1;
    }else{
        answer = 0;
    }
    // answer = slicing(input)

    // input.map((v, index)=>{
    //     console.log('v: ', v);
    //     let sel = v[index]
    //     console.log('sel: ', sel);
    // })


    // for (let i = 0; i < input.length; i++) {
    //     let sel = input[ i + 1]

    //     if(input[i]!== sel){
    //         continue;
    //     }else{
    //         input.slice(i, 2)
    //         i-=1
    //         continue
    //     }
        
    // }

    let word = s
    // while (1) {

    //     for (let i = 0; i < input.length; i++) {
    //         let element = input[i]


    //         if (element === input[i + 1]) {
    //             input.splice(i, 2)
    //             if (input.length === 0) {
    //                 return answer = 1
    //             }
    //             break;
    //         } else {
    //             if (i >= input.length - 1) {
    //                 return answer = 0;
    //             }
    //         }


    //     }

    // }


    return answer;
}
// solution('baabaa')
console.log('sol', solution('baabaa'));
// solution('cdcd')
console.log('soluti ', solution('cdcd'));
// console.log('sol', solution('baabaa'));
// console.log('soluti ', solution('baabaa'))
