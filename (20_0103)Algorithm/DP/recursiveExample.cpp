#include <stdio.h>

// int dp(int x)
// {
//     if (x == 1)
//         return 1;
//     if (x == 2)
//         return 1;
//     return dp(x - 1) + dp(x - 2);
// }

//메모이제이션을 위한 배열
int d[100];

int dp(int x)
{
    if (x == 1)
        return 1;
    if (x == 2)
        return 1;
    if (d[x] != 0)
        return d[x];
    return d[x] = dp(x - 1) + dp(x - 2);
}
int main()
{

    printf("%d\n", dp(50));
    //-298632863 오버플로우 발생 (정수형 표현 범위 초과)
    return 0;
}