#include <stdio.h>

int map[30][30];
int ch[30];
int min = 21470000;
int sum, n;
void dfs(int v, int sum)
{
    int i;
    if (n == v)
    {
        if (sum < min)
        {
            min = sum;
        }
    }
    else
    {

        for (i = 1; i <= n; i++)
        {
            if (map[v][i] > 0 && ch[i] == 0)
            {
                ch[i] = 1;

                dfs(i, sum + map[v][i]);
                ch[i] = 0;
            }
        }
    }
}
int main()
{

    int m;
    scanf("%d %d", &n, &m);
    int i, k;
    int r, l;
    for (i = 1; i <= m; i++)
    {

        scanf("%d %d %d", &r, &l, &k);
        map[r][l] = k;
    }

    ch[1] = 1;
    dfs(1, 0);

    printf("%d\n", min);
    return 0;
}
