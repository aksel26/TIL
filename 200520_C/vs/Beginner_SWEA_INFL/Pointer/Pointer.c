#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #define MENUNO 5

// ************ 포인터 ************
//      : C언어가 가지고 있는 특성중 하나, 자료형
// 메모리의 주소
// 값이 변해도 주소는 변하지 않음.
// 자료형 * 변수명 ;
//  포인터 변수 선언은 주소를 담을 공간을 할당 받는 것
// : 주소에 대한 저장이 이루어지지 않음.
// &
// : 뒤에 따라오는 변수의 주소를 의미하는 전산자
// char ch;
// char* ch;
// cp = &ch;
// 포인터 변수에 자료형이동일한 메모리의 주소를 저장해야함
//  ->자료형의 크기만큼 저장하기 때문

// 사용하는 경우
// : 1. 프로그램이 실행되는 동안 메모리의 할당을 받아 자료들을 연결 리스트나 이진 트리 등의 자료구조를 구성할 때
//   2. 주변 장치의 드라이버 작성시 장치와의 통신 방법이 메모리를 통해 일어나면 포인터를 사용하여 메모리공간 제어

// 연산자의 사용
//     1. +, -, ++, -- 만 사용가능
//     2. 주소를 연산
//     3. 주소는 모드 정수로 구성 (실수형 연산 불가)
//     4. 포인터 변수 자료형 크기만큼 연산됨

// Example
// int *p, num; // num의 주소가 0x1000번지라고 가정하면
// p =&num; // p에는 0x1000번지가 저장되고
// p++; // 결과는 0x1004 ( 4byte이므로 )

// 포인턴ㄴ변수 우선순위
// *p++;  //번지수를 증가
// (*p)++; // 포인터 변수가 가리키는 곳의 내용 증가

// 포인터와 배열
// : 연속적 메모릭 공간에 동일한 자료형의 데이터를 모아놓은 자료구조
// 배열이름  -> 메모리 공간 시작 주소(포인터 변수에 저장해 사용)
// 배열 시작 주소 대입
// char str[5] *ptr;
// 배열이름 = 주소이므로 주소연산자를 붙이지 않음.
// ptr = str;
// Example
// char str[80] = "Hello, Pointer"; //문자열 끝에 null문자 포함
// char *p;
// int i;

// // 포인터 변수 p에 str 배열의 시작주소 대입
// p = str;

// // 증감 연산자를 이용해 포인터 변수 증가
// for ( ; *p ; p++)   // *p != 0 또는 *p != '\0' : 널 문자가 아닌동안 반복하라
// {
//     // str배열의 원소를 하나하나 출력함
//     printf("%c", *p);
//     printf("\n");
// }

// 문자열의 표현
// char *p = 'C pointer';
// C Pointer 문자열 상수가 존재하는 메모리의 시작 변수를 가리킴
// 포인터 변수를 통한 문자열에 대한 접근 가능

// 문자 배열 VS 문자열
//     : 할당되는 메모리 크기 차이
//         P가 가리키는 문자열 : (문자열의 길이) + 1 = 10바이트 메모리 할당
//         str배열 : 80바이트 메모리 할당 (사용메모리 = 10 , 나머지 70은 미사용)

// 문자열 처리 함수를 이용하는 이유 ?
// C 자료형에 문자열을 다루는 형이 없기 때문
// : 문자열 처리함수에 char형 포인터 변수 사용가능

// 문자열 처리 함수
// 기본적인 문자열 처리 함수
//     char * strcpy (char * dest, const char *src);   //문자열 복사 함수
//     char * strcat (char * dest, const char *src);   //문자열 추가 함수
//     int strcmp(const char*s1, const char*s2); // 문자열 비교함수
//     size_t strlen(const char*s); //문자열 길이 함수

// 문자열 전용 입출력 함수
//     char *gets(char*s); // 문자열 입력함수
//     int puts(const char*s); //문자열 출력 함수

// 2차원 배열과 포인터

// 매개변수의 이해
// 배열 : 포인터 변수 없이 첨자를 이용해 원소간 이동 가능
// 함수를 분리하고 인자를 배열로 넘겨야 할 구조라면 ? 포인터 변수를 통해야함

// 포인터와 동적 메모리 할당
// 포인터 사용 목적 : 자유롭게 메모리로 접근하기 위함
// 할당 방법
//  1. 변수 및 배열 선언
//     : 이미 고정됨 -> 유동적일 경우 관리가 어려움

//     2. 동적메모리 할당 방법을 이용한다.

// 동적메모리 할당 함수
//     1. malloc
//         void * malloc(size_t size);
//         : size (바이트 수 기준) 에 명시된 크기만큼 메모리를 할당받는 함수

//     2. calloc
//         void * calloc(size_t nmemb, size_t size);
//         : nmemb(자료형의 크기) * size(개수), 메모리할당 뿐만 아니라 0으로 초기화해줌

//     3. realloc
//         void * malloc(void*ptr, size_t size);
//         : 사용중인 공간을 다시 재할당 받아야 할 때 사용
//           ptr:기존에 사용하던 메모리의 시작 주소, size: 재할당을 원하는 크기

// 동적 메모리 할당 공간
//     힙 세그멘트에 별도로 공간 할당 받음
//     free 함수로 해제하지 않는 한 계속 메모리를 점유함.

//     => 주소만 알아도 다른 함수에서도 동적할당된 메모리 공간을 함께 사용 가능하다.

//     운영체제에서 메모리 확보에 실패한다면 ? Null값을 반환한다.  (Null값을 항상 체크히야한다)

//     free함수
//     void free(void *ptr);
//         : ptr포인터 변수가 가리키는 메모리를 해제하는 함수
//     - 반드시 메모리의 시작 주소를 넘겨줘야함.
//     - 반드시 동적 할당 받은 메모리는 이 함수로 해제해야한다. (메모리 누수현상 방지)

//     #include <stdlib.h> 선언 필요하다.

// 1중포인터와 다중포인터
//     다중포인터
//         : 포인터가 여러 겹으로 겹쳐있는 것

//     2중 포인터 선언
//         : 자료형** 변수명;
//             ex) int**dptr = (int**) malloc(sizeof(int*));

//         - 사용하는 경우
//             1. 함수 안에서 할당한 메모리의 주소를 되돌려줘야 할 때

// 포인터배열
//     : 각 원소가 모두 포인터 자료형인 배열
//     자료형* 배열명[크기];

// 배열 포인터

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
// void swap(int pa, int pb){
//     int tmp ;
//     tmp = pa;
//     pa = pb;
//     pb = tmp ;

// }
// 출력값
// 10 20

int main()
{

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

    // int a= 10 ,b = 20;
    // swap(&a, &b);
    // printf("%d %d\n", a, b);
    // 20 10

    // int num[5] = {1,2,3,4,5};
    // int *p, i;

    // p = num;

    // for ( i = 0; i < 5; i++)
    // {
    //     printf("num[%d] ; %d\n", i , num[i]);
    // }

    // for ( i = 0; i < 5; i++)
    // {
    //     printf("*(p + %d) : %d\n", i,  *(p+i));
    // }

    // malloc 함수 예제
    // char*  p;
    // int n,i;

    // 초기화를 하지 않으면 엉뚱한 데이터 조회 가능성 존재
    //     - malloc함수 사용할 경우 조회를 먼저 하지 않도록 프로그래밍한다.
    //     - calloc함수 사용할 경우 초기화 된 메모리 할당 사용 가능
    // p = (char*)malloc(80* sizeof(char));

    // if(p==NULL){
    //     printf("메모리할당 실패");
    //     return 1;
    // }
    // printf("문자열을 입력하시오\n");
    // scanf("%s",p);
    // printf("--> %s\n",p);
    // free(p);

    // realloc 함수 예제
    // n = strlen(p);
    // p = (char*)realloc((void*) p, 20 * sizeof(char));

    // if(p==NULL){
    //     printf("메모리할당 실패 \n");
    //     return 1;

    // }

    // printf("10글자 이내의 문자열을 추가 입력하시오 \n");
    // scanf("%s", p+n);

    // printf("입력된 문자열 : %s\n", p);
    // for문으로 출력가능
    // for ( i = 0; p[i]; i++)
    // {
    //     printf("%c", p[i]);
    // }
    // printf("\n");

    // free(p);

    // 문자열을 입력하시오
    // 안녕하세요
    // 10글자 이내의 문자열을 추가 입력하시오
    // 반갑습니다
    // 입력된 문자열 : 안녕하세요반갑습니다


// 포인터배열 연습1.
    // char* string[MENUNO] = {"Add", "Substract","Multiply","Divide","Exit"};
    // int i, menuno;

    // do{
    //     for ( i = 0; i < MENUNO; i++)
    //     {
    //         printf("%d %s\n", i+1, string[i]);
    //     }
    //     printf("choice =====>\n");
    //     scanf("%d", &menuno);
    //     switch (menuno)
    //     {
    //     case 1:
    //         printf("ADD\n");
    //         break;
    //     case 2:
    //         printf("Substract\n");
    //         break;
    //     case 3:
    //         printf("Multiply\n");
    //         break;
    //     case 4:
    //         printf("Divide\n");
    //         break;
    //     case 5:
    //         printf("Exit\n");
    //         break;
    //     default:
    //         printf("Wrong Choice\n");
    //         break;
    //     }

    // }while(menuno!=5);


// 포인터 배열 연습2
    // int num1 = 10, num2 = 20, num3 = 30, num4 = 40;
    // int arr2d[2][4] = {1, 2, 3, 4, 5, 6, 7, 8};

    // int i, j;
    // int *who_a[4] = {&num1, &num2, &num3, &num4}; //포인터 배열
    // int(*who_b)[4] = arr2d;                       // 배열 포인터;

    // printf("%d %d %d %d\n", *who_a[0], *who_a[1], *who_a[2], *who_a[3]);

    // for (i = 0; i < 2; i++)
    // {
    //     for (j = 0; j < 4; j++)
    //     {
    //         printf("%d", who_b[i][j]);
    //     }

    //     printf("\n");
    // }
    // 포인터배열
    // 0 20 30 40

    // 배열포인터
    // 1234
    // 5678

    return 0;
}