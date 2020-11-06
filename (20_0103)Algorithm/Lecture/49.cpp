#include <stdio.h>
#include <vector>

using namespace std;

int main()
{

    int n, i, j, cnt = 0;

    scanf("%d", &n);

    //정면
    vector<int> a(n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    //우측
    vector<int> b(n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    // 위에서 본 높이
    vector<vector<int>> c(n + 1, vector<int>(n + 1, 0));

    int tmp;
    for (i = n - 1; i >= 0; i--)
    {
        tmp = b[i];

        for (j = 0; j < n; j++)
        {
            if (tmp < a[j])
            {
                c[n - i - 1][j] = tmp;
            }
            else if (tmp == a[j])
            {
                c[n - i - 1][j] = tmp;
            }
            else if (tmp > a[j])
            {
                c[n - i - 1][j] = a[j];
            }
        }
    }

    for (i = 0; i < n; i++)
    {

        for (j = 0; j < n; j++)
        {
            cnt += c[i][j];
            printf("%d ", c[i][j]);
        }

        printf("\n");
    }

    printf("%d\n", cnt);

    return 0;
}