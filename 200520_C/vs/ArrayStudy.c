#include <stdio.h>

// 문자열의 길이를 구하기 위해 추가
#include <string.h>

int main(void)
{
    // ============ 배열의 역순 출력 ============
    // int size, i, num;
    // scanf("%d", &size);
    // int a[size];

    // for (i = 0; i < size; i++)
    // {
    //     scanf("%d", &a[i]);
    // }

    // for (i = size - 1; i >= 0; i--)
    // {
    //     printf("%d", a[i]);
    // }
    // 입력
    // 7
    // 6 3 7 8 4 9 5
    // 출력
    // 5948736

    // ============ 배열의 회전 ============
    // int a[101], rotate, tmp,j ,i;

    // for (i = 0; i < 9; i++)
    // {
    //     scanf("%d", &a[i]);
    // }
    // scanf("%d", &rotate);
    // for (i = 0; i < rotate; i++)
    // {
    //     tmp = a[0];
    //     a[0] = a[9];
    //     a[9] = tmp;

    //     for ( j = 0; j < 9; j++)
    //     {
    //         a[j] = a[j + 1];
    //     }

    // }
    // for ( i = 0; i < 9; i++)
    // {
    //     printf("%d ",a[i]);
    // }
    // 입력
    // 5 9 6 11 33 21 66 15 35
    // 3(회전수)
    // 출력
    // 11 33 21 66 15 35 5 9 6

    // ============ 38. 자리찾기 ============

    // int size, input, i, length;

    // scanf("%d", &size);
    // int a[size + 1];
    // length = sizeof(a) / sizeof(a[0]);

    // for (i = 0; i < size; i++)
    // {
    //     scanf("%d", &a[i]);
    // }

    // scanf("%d", &input);

    // for (i = 0; i <= length; i++)
    // {
    //     if (a[i] < input && a[i + 1] > input)
    //     {
    //         a[i + 3] = a[i + 2];
    //         a[i + 2] = a[i + 1];
    //         a[i + 1] = input;
    //     }
    // }

    // for (i = 0; i < length; i++)
    // {
    //     printf("%d ", a[i]);
    // }

    // 해설지 참고
    // int n, tmp, i, arr[101];
    // scanf("%d", &n);

    // for (i = 1; i <= n; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }

    // scanf("%d", &tmp);

    // for (i = n; i >= 1; i--)
    // {
    //     if (arr[i] > tmp)
    //     {
    //         arr[i + 1] = arr[i];
    //     }
    //     else
    //     {
    //         break;
    //     }
    // }
    // arr[i + 1] = tmp;
    // for (i = 1; i <= n + 1; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    // 입력
    // 7
    // 11 15 19 23 27 32 36
    // 21
    // 출력
    // 11 15 19 21 23 27 32 36

    // ============ 39.일곱난장이 ============
    // int members[101], i, sum, tmp, j;

    // for (i = 0; i < 9; i++)
    // {
    //     scanf("%d", &members[i]);

    //     sum += members[i];
    // }

    // for (i = 0; i < 8; i++)
    // {
    //     for (j = i + 1; j < 9; j++)
    //     {
    //         tmp = sum - (members[i] + members[i + 1]);
    //         if (tmp == 100)
    //         {
    //             members[i] = -1;
    //             members[j] = -1;
    //             break;
    //         }
    //     }
    //     if (tmp == 100)
    //         break;
    // }
    // for (i = 0; i < 9; i++)
    // {
    //     if (members[i] > 0)
    //         printf("%d ", members[i]);
    // }

    // ============ 개울건너기 ============
    // int num, i;
    // scanf("%d", &num);
    // int rocks[num];
    // rocks[0] = 1;
    // rocks[1] = 1;
    // for (i = 2; i <= num + 1; i++)
    // {
    //     rocks[i] = rocks[i - 2] + rocks[i - 1];
    // }
    // printf("%d ", rocks[num + 1]);
    // 입력
    // 7
    // 출력
    // 34
    // 경우의 수와 피보나치 수열문제였다.


    // ============ A를 #으로 ============

    // char str[100];
    // int i, n;
    // scanf("%s", str);;
    // n = strlen(str);
    // for ( i = 0; i < n; i++)
    // {
    //     if(str[i] =='A') str[i] = '#';
    // }
    // printf("%s\n", str);
    // 입력
    // BANANA
    // 출력
    // B#N#N#
   

    

    
    

    
    




    return 0;
}
