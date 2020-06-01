#include <stdio.h>
#include <stdbool.h>

void prntStar(int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

bool isPrime(int n)
{

    int i;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            ;
        return false;
    }
    return true;
}

int digit(int n)
{
    int div = 1, cnt = 0;
    while (n / div > 0)
    {
        cnt++;

        div *= 10;
    }
    return cnt;
}

int Min(int tmp[], int size)
{
    int min = tmp[0], i;
    for (i = 0; i < size - 1; i++)
    {

        if (min > tmp[i + 1])
        {
            min = tmp[i + 1];
            printf("%d\n", min);
        }
    }
    return min;
}

// 보통 함수를 main위에다가 정의하지만,
// 밑에다가 정의할 경우 위에 이렇게 꼭 명시해 주어야한다.
int abs(int x);

int main()
{

    // ============= 별찍기 =============

    // int n;
    // scanf("%d", &n);
    // prntStar(n);

    // ============= 소수 판별 =============
    // int n, i, a;
    // scanf("%d", &n);

    // for (i = 1; i <= n; i++)
    // {
    //     scanf("%d", &a);
    //     if (isPrime(a))
    //         printf("%d ", a);
    // }

    // ============= 절댓값 =============
    // int a;
    // a = -3;
    // printf("%d\n", abs(a));

    // ============= 자리수 출력 =============
    // int n;
    // scanf("%d", &n);
    // printf("%d", digit(n));

    // ============= 배열의 최솟값 리턴 =============
    int size, i;

    scanf("%d", &size);
    int tmp[size];
    for (i = 0; i < size; i++)
    {
        scanf("%d", &tmp[i]);
    }
    printf("%d", Min(tmp, size));

    return 0;
}

int abs(int x)
{
    if (x < 0)
        return x * -1;
    else
        return x;
}
