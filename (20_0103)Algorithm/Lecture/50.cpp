#include <stdio.h>
#include <vector>

using namespace std;

int main()
{

    int h, w, i, j, n, m, k, l, cnt = 0, max = -2147000;

    scanf("%d %d", &h, &w);

    vector<vector<int>> a(h, vector<int>(w));

    for (i = 0; i < h; i++)
    {
        for (j = 0; j < w; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    scanf("%d %d", &n, &m);

    for (i = 0; i < h - n + 1; i++)
    {

        for (l = 0; l < w - m + 1; l++)
        {

            for (j = i; j < i + n; j++)
            {
                for (k = l; k < l + m; k++)
                {
                    cnt += a[j][k];
                }
                k = l;
            }

            if (max < cnt)
            {
                max = cnt;
            }
            cnt = 0;
        }
    }

    printf("%d\n", max);

    return 0;
}