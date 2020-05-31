#include <stdio.h>

// 문자열의 길이를 구하기 위해 추가
#include <string.h>
#include <math.h>
int a[6][6];
int st[2][7];

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

    // ============ 중 for문 ============
    // int a[6][6];

    // int i , j , k = 1;
    // for ( i = 0; i < 5; i++)
    // {
    //     for ( j = 4; j >=0 ; j--)
    //     {
    //         a[i][j] = k;
    //         k++;
    //     }

    // }
    // for ( i = 0; i < 5; i++)
    // {
    //     for ( j = 0; j < 5; j++)
    //     {
    //      printf("%3d", a[i][j]);
    //     }
    //  printf("\n")   ;
    // }

    // 출력
    // 5  4  3  2  1
    // 10  9  8  7  6
    // 15 14 13 12 11
    // 20 19 18 17 16
    // 25 24 23 22 21

    // ============ 2차원 배열 출력 1.============

    //     int i, j, k = 1, l = 1, num;
    //     scanf("%d", &num);
    //     int a[num +1 ][num+1];
    //     for (i = num -1; i >= 0; i--)
    //     {

    //         for (j = 0; j < num; j++)
    //         {

    //             a[i][j] = l;
    //             l += num;
    //         }

    //         l = ++k;
    //     }

    //     for (i = 0; i < num; i++)
    //     {
    //         for (j = 0; j < num; j++)
    //         {
    //             printf("%3d", a[i][j]);
    //         }
    //         printf("\n");
    //     }
    //     입력
    //     7
    //     출력
    //     7 14 21 28 35 42 49
    //     6 13 20 27 34 41 48
    //     5 12 19 26 33 40 47
    //     4 11 18 25 32 39 46
    //     3 10 17 24 31 38 45
    //     2  9 16 23 30 37 44
    //     1  8 15 22 29 36 43

    // ============ 2차원 배열 출력 2.============
    // int i, j, num, k = 1, l = 1;

    // scanf("%d", &num);

    // int a[num + 1][num + 1];

    // for (i = 0; i < num; i++)

    // {
    //     for (j = i; j >= 0; j--)
    //     {
    //         a[i][j] = k;
    //         k++;
    //     }

    //     for (j = l; j < num; j++)
    //     {
    //         a[i][j] = 0;
    //     }
    //     l++;
    // }

    // for (i = 0; i < num; i++)
    // {
    //     for (j = 0; j < num; j++)
    //     {
    //         printf("%3d", a[i][j]);
    //     }
    //     printf("\n");

    // }
    // 입력
    // 5
    // 출력
    // 1  0  0  0  0
    // 3  2  0  0  0
    // 6  5  4  0  0
    // 10  9  8  7  0
    // 15 14 13 12 11

    // ============ 2차원 배열 출력 3.============

    // int i, j, k = 1, l = 2, m;
    
    // int a[6][6];

    // for (i = 0; i < 5; i++)
    // {
    //     for (j = 0; j < 5; j++)
    //     {
    //         a[i][j] = 0;

    //         if (i == j)
    //         {
    //             a[i][j] = k;
    //             k = k + 2;
    //         }

    //         if (i < 5 / 2)
    //         {
    //             if (j == 4 - i)

    //             {
                     
    //                 for (m = 0; m <= 1; m++)
    //                 {
    //                     a[i][j] = a[m][m] + 1;

                        
    //                 }
                   
    //             }
    //         }
    //         else if (i > 5 / 2 )
    //         {
    //             if (j == 4 - i)
    //             {
    //                 a[i][j] = a[3][3] -1;
                   
    //             }
    //         }
    //     }
    // }

    // for (i = 0; i < 5; i++)
    // {
    //     for (j = 0; j < 5; j++)
    //     {
    //         printf("%7d", a[i][j]);
    //     }
    //     printf("\n");
    // }

    // 출력
    //   1      0      0      0      2
    //   0      3      0      4      0
    //   0      0      5      0      0
    //   0  32765      0      7      0
    //   6      0      0      0      9
    // 문제점 : 4행에서 쓰레기 값이 나온 이유는 for문에서 숫자가 채워지는 순서가 왼쪽부터 오른쪽으로 채워지고 있기 때문에,
    //         7보다 먼저 값이 입력된다. 그러므로 값을 찾을 수 없었다.

    // 해답
    // 문제 해결의 Key :
    //      j == i, i + j ==4 (5x5행렬일 경우)

    int i, j, k = 1, num;
    scanf("%d", &num);
    for ( i = 0; i < num; i++)
    {
        for ( j = 0; j < num; j++)
        {
            if(i == j  || i + j == num - 1){
                a[i][j] = k ; 
                k++;
            }
        }
        
    }

    for ( i = 0; i < num; i++)
    {
        for ( j = 0; j < num; j++)
        {
            printf("%3d",a[i][j]);
        }
        printf("\n");
        
    }
//   1  0  0  0  2
//   0  3  0  4  0
//   0  0  5  0  0
//   0  6  0  7  0
//   8  0  0  0  9
    




    

// ============ 방 배정 ============
    
    // int members, div, S, Y,i,j;
    // double sum=0;

    // // int st[2][7];
    // scanf("%d %d", &members, &div);
    

    // for ( i = 1; i <= members; i++)
    // {
    //     scanf("%d %d", &S, &Y);
    //     st[S][Y]++;

    // }
    // for ( i = 0; i <=1; i++)
    // {
    //     for ( j = 1; j <= 6; j++)
    //     {
    //         sum = sum + (ceil(st[i][j] / (double)div));
    //     }
        
    // }

    // printf("%d\n", (int)sum);
    
    
    





    return 0;
}

