const arr = [5, 4, 3, 2, 1];
{
    const fruits = ['apple', 'juice', 'is', 'tasty'];
    console.log(fruits.join(' '));
    // apple juice is tasty

    // join의 default는 ,가 붙여서 나온다.
    // console.log(fruits.join());
    // apple,juice,is,tasty
}


{
    // split(구분자(필수), 제한범위(선택옵션));
    const fruits = 'carrot juice is not tasty';
    const result1 = fruits.split(' ');
    console.log(result1);
}


// Q1
{
    arr.reverse();
    for (index of arr) {
        console.log(index);
    }
}



// Q2
{
    // 변형
    arr.splice(0, 2);
    for (index of arr) {
        console.log(index);
    }

    // 변형이 아닌 새로운 배열로 기존 것은 변형되지 않는다.
    const arr2 = [1, 2, 3, 4, 5];
    const newArr = arr2.slice(2, 5);
    console.log(newArr); //[ 3, 4, 5 ]
    console.log(arr2); //[ 1, 2, 3, 4, 5 ]

}


class Student {
    constructor(name, age, enrolled, score) {
        this.name = name;
        this.age = age;
        this.enrolled = enrolled;
        this.score = score;
    }
}
const students = [
    new Student('A', 29, true, 45),
    new Student('B', 28, false, 80),
    new Student('C', 30, true, 90),
    new Student('D', 40, false, 66),
    new Student('E', 18, true, 88),
];


// Q3
{
    // 내가 작성
    // for (let i = 0; i < students.length; i++) {
    //     if (students[i].score == 90) {
    //         console.log(students[i].name);
    //     }
    // }

    // 답안
    
    // const result = students.find(function (student, index){
    //     return student.score === 90;
    // })
    // console.log(result);
    console.clear();

    const result2 = students.find((student) => student.score === 90);
    console.log(result2);

}



{
    // 내가 작성
    // const enrolledStudents = new Array();
    // for (let i = 0; i < students.length; i++) {
    //     if (students[i].enrolled == true) {
    //         enrolledStudents.push(students[i].name);
    //     }
    // }

    // 답안
    const result3 = students.filter((student) => student.enrolled);
    console.log(result3);
}
// for(let i = 0 ; i< enrolledStudents.length ; i++){
//     console.log(enrolledStudents[i]);
// }


// Q4
const scoreArr = new Array();
for (let i = 0; i < students.length; i++) {
    scoreArr.push(students[i].score);
}



for (let i = 0; i < students.length; i++) {
    if (students[i].score < 50) {
        console.log('T');
        break;
    }
}

// students.includes(students[0].score<50);
