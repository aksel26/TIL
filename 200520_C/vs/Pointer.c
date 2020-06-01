#include <stdio.h>

int main(){

// 예제 1
     int a= 20;

    //  printf("%d\n", a);

    //  주소값을 16진수로 표현하기 위해 %x
    //  printf("%x\n", &a);

     // &a의(주소) 값을 가져와라 
    //  printf("%d\n", *(&a)); 


// 예제 2
     int b = 20;

    //  실제 메모리 주소 값을 저정할 수 있는 변수
     int *pa ; 


     pa = &b;
     printf("%x\n", &b);
     printf("%x\n", &pa);
     printf("%d\n", *pa);

    return 0;
}