#include <stdio.h>
#include <vector>
using namespace std;
int main()
{
    int n, m, lt = 0, rt, mid, i;
    scanf("%d %d", &n, &m);
    vector<int> a(n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int total = 0;
    int cnt = 0;
    rt = n - 1;
    while (cnt != m)
    {
        mid = (lt + rt) / 2;
        cnt++;
        lt = mid + 1;
        if (lt == rt)
        {
            total = a[rt - 1] + a[rt];
        }
    }

    printf("%d\n", total);

    return 0;
}