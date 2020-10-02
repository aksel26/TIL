#include <stdio.h>

int main(){

    char a[101], b[101];
    int i , p = 0;

    gets(a);

    for ( i = 0; i < a[i]!='\0'; i++)
    {
        if(a[i]!=' '){

            // 대문자 변환
            if(a[i]>= 65 && a[i]<=90){
                b[p++] = a[i] + 32;
            }
            // 소문자면 그냥 넣는다
            else b[p++] = a[i];
        }
    }


    // 문자가 다 들어간 후 맨 마지막 공백을 넣어준다.
    b[p] = '\0';
    printf("%s\n",b);
    


    return 0;
}