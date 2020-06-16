1. 라이브브러리 함수 
    1.1 표준 입출력 함수
        1.1.1 종류
            A. char *gets(char *s);
            B. int getChar()
            C. int scanf(const char *format);
            D. int puts(const char *s);
            E. int putchar(int c);
            F. int printf(const char *format);

#include <stdio.h>

int main(){

    char buffer[80];
    char string[1024];

    printf("문자열을 입력하세요\n");

    gets(buffer);
    sprintf(string,"입력된 문자열은 %s입니다.", buffer);
    puts(string);

    return 0;
}

    1.2 문자 처리 함수의 이해
      : 문자의 특성 구분이 필요할 경우 유용하다.
      #include <ctype.h>

        1.2.1 종류
            A. int isalnum(int ch);
                : 인자가 영문자나 숫자인 경우 참, 그렇지 않으면 0(거짓) 반환
            B. int isalpha(int ch);
                : 인자가 영문자인 경우 참, 그렇지 않으면 0(거짓) 반환
            C. int isdigit(int ch);
                : 인자가 숫자인 경우 참, 그렇지 않으면 0(거짓) 반환
            D. int iscntrl(int ch);
            E. int isspace(int ch);
                : 인자가 공백문자인 경우 참, 그렇지 않으면 0(거짓) 반환
            F. int ispunct(int ch);
            G. int tolower(int ch), int toupper(int ch);
                : 인자가 대문자인 경우 소문자로 소문자인 경우 대문자로    반환
        
    
    1.3 문자열 처리 함수의 이해
      (C에는 문자열 자료형이 제공되지 않음)
      #include <string.h>

        1.3.1 종류
        


            