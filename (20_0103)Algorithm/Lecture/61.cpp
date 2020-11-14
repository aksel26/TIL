#include <stdio.h>

int a[11];
int n;
int total;
int cnt;

void DFS(int L, int sum)
{
    if (L == n + 1)
    {
        return;
    }

    if (sum == total)
    {
        cnt++;
    }

    else
    {
        DFS(L + 1, sum + a[L]);
        DFS(L + 1, sum - a[L]);
    }
}
int main()
{

    int i;

    scanf("%d %d", &n, &total);

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }

    DFS(1, 0);

    printf("%d\n", cnt);

    return 0;
}