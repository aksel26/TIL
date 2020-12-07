#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;
int Q[10];

int ch[30], dis[30];
int main()
{

    int n, m, i, a, b, x;
    vector<int> map[10];
    queue<int> Q;

    scanf("%d %d", &n, &m);

    for (i = 1; i <= m; i++)
    {
        scanf("%d %d", &a, &b);
        map[a].push_back(b);
    }

    Q.push(1);
    ch[1] = 1;
    while (!Q.empty())
    {
        x = Q.front();
        Q.pop();

        for (i = 0; i < map[x].size(); i++)
        {
            if (ch[map[x][i]] == 0)
            {
                ch[map[x][i]] = 1;
                Q.push(map[x][i]);

                dis[map[x][i]] = dis[x] + 1;
            }
        }
    }

    for (i = 2; i <= n; i++)
    {
        printf("%d : %d \n", i, dis[i]);
    }

    return 0;
}