#include <stdio.h>
#include <algorithm>
#include <vector>
#include <iostream>
#include <queue>

using namespace std;
struct Edge
{
    int vex;
    int dis;

    Edge(int a, int b)
    {
        vex = a;
        dis = b;
    }

    bool operator<(const Edge &b) const
    {
        // 최소
        return dis > b.dis;
    }
};
int main()
{

    int a, b, c, n, v, e, i, res = 0;
    priority_queue<Edge> Q;
    vector<pair<int, int>> graph[30];

    scanf("%d %d", &v, &e);
    vector<int> dist(v + 1, 2147000000);
    for (i = 1; i <= e; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        graph[a].push_back(make_pair(b, c));
    }

    Q.push(Edge(1, 0));
    dist[1] = 0;
    while (!Q.empty())
    {

        int now = Q.top().vex;
        int cost = Q.top().dis;
        Q.pop();
        if (cost > dist[now])
            continue;
        for (i = 0; i < graph[now].size(); i++)
        {
            int next = graph[now][i].first;
            int nextDis = graph[now][i].second + cost;
            if (dist[next] > nextDis)
            {
                dist[next] = nextDis;
                Q.push(Edge(next, nextDis));
            }
        }
    }

    // for (i = 2; i <= n; i++)
    // {
    //     if (dist[i] != 214700000)
    //         printf("%d : %d \n", i, dist[i]);
    //     else
    //         printf("%s : \n", "impossible");
    // }

    for (i = 2; i <= v; i++)
    {
        if (dist[i] != 2147000000)
            cout << i << " : " << dist[i] << endl;
        else
            cout << i << " : impossible" << endl;
    }

    return 0;
}
