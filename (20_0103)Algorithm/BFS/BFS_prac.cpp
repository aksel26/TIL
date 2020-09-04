#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> arr[1001];

int m, n, start;
int c[1001];

void bfs(int start)
{

    queue<int> q;
    q.push(start);
    c[start] = 1;

    while (!q.empty())
    {
        int v = q.front();
        printf("%d ", v);
        q.pop();

        for (int i = 0; i < arr[v].size(); i++)
        {
            int next = arr[v][i];
            if (c[next] == 0)
            {
                c[next] = true;
                q.push(next);
            }
        }
    }
}
int main()
{

    int x, y;
    cin >> n >> m >> start;

    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }
    for (int i = 1; i <= n; i++)
    {
        //정점 번호가 더 작은 것을 먼저 방문하기 위해 sort
        sort(arr[i].begin(), arr[i].end());
    }

    bfs(start);

    return 0;
}
