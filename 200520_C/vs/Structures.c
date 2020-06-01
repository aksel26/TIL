#include <stdio.h>
#include <string.h>

// =========== 구조체 ===========  
    // : 나만의 데이터형을 만들고 싶을때 사용한다

// 구조체 선언 : struct
// 데이터형의 이름 : Student
// 메모리에는 아직 만들어지지 않은 단계
struct Student{
    char name[20];
    int mat, eng;

};

int main(){
    struct Student s1;

    // strcpy : 문자열을 서로 복사해 대입해주는 함수 #include <string.h>
    // 대입연산자로는 문자열 대입할 수 없다. -> 이때 strcpy를 쓴다.
    strcpy(s1.name, "Jhon");
    s1.mat = 90;
    s1.eng = 95;
    printf("%s\n", s1.name);

    return 0;
}