#include <stdio.h>

// call by reference
// void swap(int *pa, int *pb){
//         int tmp ;
//         tmp = *pa;
//         *pa = *pb;
//         *pb = tmp;
//     }
// 출력값
// 20 10


// call by value
void swap(int pa, int pb){
    int tmp ;
    tmp = pa;
    pa = pb;
    pb = tmp ;

}
// 출력값
// 10 20 


int main(){

// 예제 1
    //  int a= 20;

    //  printf("%d\n", a);

    //  주소값을 16진수로 표현하기 위해 %x
    //  printf("%x\n", &a);

     // &a의(주소) 값을 가져와라 
    //  printf("%d\n", *(&a)); 


// 예제 2
    //  int b = 20;

    //  실제 메모리 주소 값을 저정할 수 있는 변수
    //  int *pa ; 


    //  pa = &b;
    //  printf("%x\n", &b);
    //  printf("%x\n", &pa);
    //  printf("%d\n", *pa);


// 예제 3

    // int a = 10 , b = 20; 
    // int *pa ; 
    // pa = &a;
    // printf("%d\n", *pa);    //10
    // *pa = b;
    // printf("%d\n", *pa);    //20
    // *pa =* pa + 1;
    // printf("%d\n", *pa);    //21


// ********* Call by Value - Call by Reference *********
// 예제1

    
    int a= 10 ,b = 20;
    swap(&a, &b);
    printf("%d %d\n", a, b);
    // 20 10







    return 0;
}