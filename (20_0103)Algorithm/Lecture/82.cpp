#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int a[20], res[20], ch[20], cnt, n, r;

void DFS(int L)
{

    if (L == r)
    {

        for (int j = 0; j < L; j++)
        {
            printf("%d ", res[j]);
        }
        cnt++;

        //자동 개행
        puts("");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (ch[i] == 0)
            {
                res[L] = a[i];
                ch[i] = 1;
                DFS(L + 1);
                ch[i] = 0;
            }
        }
    }
}
int main()
{
    scanf("%d %d", &n, &r);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }

    DFS(0);
    printf("%d\n", cnt);

    return 0;
}