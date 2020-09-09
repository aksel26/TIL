#include <iostream>
#include <queue>
#include <vector>

using namespace std;

//원소의 갯수
int number = 7;
//방문처리를 위한 배열
int c[7];
//1~7까지의 인덱스를 이용하기 위한 벡터
vector<int> a[8];

void bfs(int start)
{
    queue<int> q;
    q.push(start);
    c[start] = true;
    while (!q.empty())
    {
        int x = q.front();
        q.pop();

        printf("%d ", x);
        for (int i = 0; i < a[x].size(); i++)
        {
            int y = a[x][i];
            if (!c[y])
            {
                q.push(y);
                c[y] = true;
            }
        }
    }
}
int main()
{
    a[1].push_back(2);
    a[2].push_back(1);
    a[1].push_back(3);
    a[3].push_back(1);
    a[2].push_back(3);
    a[3].push_back(2);
    a[2].push_back(4);
    a[4].push_back(2);
    a[2].push_back(5);
    a[5].push_back(2);
    a[3].push_back(6);
    a[6].push_back(3);
    a[3].push_back(7);
    a[7].push_back(3);
    a[4].push_back(5);
    a[5].push_back(4);
    a[6].push_back(7);
    a[7].push_back(6);

    
    
    
    
    bfs(1);

    return 0;
}