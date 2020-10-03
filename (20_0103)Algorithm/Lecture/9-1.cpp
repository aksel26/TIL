#include <stdio.h>

using namespace std;
int cnt[50001];
int main()
{
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // i 의 배수
            // j 증가 연산 수가 배수만 증가하면 되니까 복잡도가 줄어드는 효과가 있다.
        for (int j = 1; j < n; j = j + i)
        {
            cnt[j]++;
        }
    }

    for (int i = 1; i < n; i++)
    {
        printf("%d ", cnt[i]);
    }

    return 0;
}