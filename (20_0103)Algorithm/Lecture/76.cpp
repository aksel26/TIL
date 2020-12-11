#include <stdio.h>

// 팩토리얼 재귀함수 표현

// int DFS(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return n * DFS(n - 1);
//     }
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     printf("%d\n", DFS(n));
//     return 0;
// }
int dy[21][21];
int DFS(int n, int r)
{
    // 메모이제이션
    if (dy[n][r] > 0)
    {
        return dy[n][r];
    }

    if (n == r || r == 0)
    {
        return 1;
    }

    else
    {
        // 메모이제이션
        return dy[n][r] = DFS(n - 1, r - 1) + DFS(n - 1, r);
    }
}

int main()
{
    int n, r;
    scanf("%d %d", &n, &r);

    printf("%d\n", DFS(n, r));
    return 0;
}
