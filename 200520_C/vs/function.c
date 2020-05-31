#include <stdio.h>
#include <stdbool.h>

// 보통 함수를 main위에다가 정의하지만,
// 밑에다가 정의할 경우 위에 이렇게 꼭 명시해 주어야한다.

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
        if (n % i == 0 );
            return false;
    }
    return true;

    // for ( i = 0; i < n; i++)
    // {
    //     a[i] = scanf("%d", &num);
    // }

    // for ( i = 0; i < n; i++)
    // {
    //     for ( j = 1; j < 10; j++)
    //     {
    //         if( a[i] % j == 0 ){
    //             return false;
    //         }else{
    //             printf("%d", a[i]);
    //             return true;
    //         }
    //     }

    // }
}

int abs(int x);

int main()
{
    // int n;
    // scanf("%d", &n);
    // prntStar(n);

    int n, i, a;
    scanf("%d", &n);
    // if(isPrime==true){
    // printf("%d", isPrime(n));

    // }

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if (isPrime(a))
            printf("%d ", a);
    }

    // int a;
    // a = -3;
    // printf("%d\n", abs(a));

    return 0;
}

int abs(int x)
{
    if (x < 0)
        return x * -1;
    else
        return x;
}
