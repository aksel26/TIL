#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int n, m, i, lt, rt, mid;

    scanf("%d", &n);
    vector<int> a(n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &m);
    vector<int> b(m);
    for (i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    sort(a.begin(), a.end());
    int cmp;
    for (i = 0; i < m; i++)
    {
        cmp = b[i];
        lt = 0;
        rt = n - 1;
        while (lt <= rt)
        {

            mid = (lt + rt) / 2;
            if (a[mid] == cmp)
            {
                b[i] = 1;
                break;
            }
            else if (cmp < a[mid])
            {
                rt = mid - 1;
            }
            else if (cmp > a[mid])
            {
                lt = mid + 1;
            }
            b[i] = 0;
        }
    }

    for (i = 0; i < m; i++)
    {
        printf("%d\n", b[i]);
    }

    return 0;
}