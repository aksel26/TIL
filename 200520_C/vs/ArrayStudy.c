#include <stdio.h>

// 문자열의 길이를 구하기 위해 추가
#include <string.h>

int main(void)
{
    // 배열의 역순 출력
    int size, i, num;
    scanf("%d", &size);
    int a[size];

    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = size - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
    // 입력
    // 7
    // 6 3 7 8 4 9 5
    // 출력
    // 5948736


    // 배열의 회전
    


    return 0;
}
