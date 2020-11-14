#include <stdio.h>

int a[11];
int n, m;
int cnt;

void DFS(int L, int val)
{
    if (L == n + 1)
    {
        if (val == m)
        {
            cnt++;
        }
    }

    else
    {
        DFS(L + 1, val + a[L]);
        DFS(L + 1, val - a[L]);
        DFS(L + 1, val);
    }
}
int main()
{

    int i;

    scanf("%d %d", &n, &m);

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }

    DFS(1, 0);
    if (cnt == 0)
        printf("-1\n");
    else
        printf("%d\n", cnt);

    return 0;
}