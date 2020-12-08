#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int ch[9];

int main()
{
    int n, k, i;
    scanf("%d %d", &n, &k);
    queue<int> Q;
    int cnt = 1;
    int num = 1;
    int x;

    for (int i = 1; i <= n; i++)
    {
        Q.push(i);
    }

    // 내 코드
    while (Q.size() != 1)
    {

        x = Q.front();
        cnt++;
        if (cnt == k)
        {
            Q.pop();
            cnt = 1;
        }
        Q.pop();
        Q.push(x);
    }

    // 해설
    // while (!Q.empty())
    // {
    //     for (i = 1; i < k; i++)
    //     {
    //         Q.push(Q.front());
    //         Q.pop();
    //     }
    //     Q.pop();
    //     if (Q.size() == 1)
    //     {
    //         printf("%d\n", Q.front());
    //         Q.pop();
    //     }
    // }

    printf("%d ", Q.front());
    return 0;
}