#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;
int ch[30];
struct Edge
{
    int e;
    int val;

    Edge(int a, int b)
    {
        e = a;
        val = b;
    }

    bool operator<(const Edge &b) const
    {
        // 최소
        return val > b.val;
    }
};
int main()
{

    int a, b, c, v, e, i, res = 0;
    priority_queue<Edge> Q;
    vector<pair<int, int>> Ve[30];
    scanf("%d %d", &v, &e);

    for (i = 1; i <= e; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        Ve[a].push_back(make_pair(b, c));
        Ve[b].push_back(make_pair(a, c));
    }

    Q.push(Edge(1, 0));

    while (!Q.empty())
    {
        Edge tmp = Q.top();
        Q.pop();
        int v = tmp.e;
        int cost = tmp.val;

        if (ch[v] == 0)
        {
            ch[v] = 1;
            res += cost;
            for (i = 0; i < Ve[v].size(); i++)
            {
                Q.push(Edge(Ve[v][i].first, Ve[v][i].second));
            }
        }
    }

    printf("\n%d\n", res);

    return 0;
}