#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int r[101];

struct Edge
{
    int v1;
    int v2;
    int val;

    Edge(int a, int b, int c)
    {
        v1 = a;
        v2 = b;
        val = c;
    }

    bool operator<(const Edge &b) const
    {
        return val < b.val;
    }
};
int find(int v)
{
    if (v == r[v])
    {
        return v;
    }
    else
        return r[v] = find(r[v]);
}

void Union(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a != b)
        r[a] = b;
}
int main()
{

    int a, b, c, v, e, i, res = 0;
    vector<Edge> Ve;
    scanf("%d %d", &v, &e);

    for (i = 1; i <= v; i++)
    {
        r[i] = i;
    }

    for (i = 1; i <= e; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        Ve.push_back(Edge(a, b, c));
    }

    sort(Ve.begin(), Ve.end());

    for (i = 0; i <= e; i++)
    {
        printf("sorted : %d %d %d\n", Ve[i].v1, Ve[i].v2, Ve[i].val);
    }

    for (i = 0; i < e; i++)
    {
        int fa = find(Ve[i].v1);
        int fb = find(Ve[i].v2);
        if (fa != fb)
        {
            res += Ve[i].val;
            Union(Ve[i].v1, Ve[i].v2);
        }
    }

    printf("\n%d\n", res);

    return 0;
}