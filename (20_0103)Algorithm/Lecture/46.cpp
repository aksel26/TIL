#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;
int a[2001];
int main()
{

    int n, k, i, cnt = 0;

    scanf("%d", &n);
    vector<int> b(n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }

    scanf("%d", &k);
    int tmp;
    int idx = 0;
    while (1)
    {
        tmp = a[idx];
        if (b[tmp - 1] != 0)
        {
            b[tmp - 1]--;
            cnt++;
            idx++;
            if (idx >= n)
                idx = 0;
        }
        idx++;
        if (cnt == k)
        {
            printf("%d\n", idx);
            break;
        }
    }

    return 0;
}
