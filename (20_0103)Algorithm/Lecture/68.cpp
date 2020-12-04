
#include <stdio.h>

#include <vector>
#include <algorithm>

using namespace std;
int ch[30], cnt = 0, n, cost = 2147000000;

vector<pair<int, int> > map[30];

void DFS(int v, int sum)
{
    int i;
 	if(v==n){
		if(sum<cost) cost=sum;
	}
    else
    {
       for(i=0; i<map[v].size(); i++){
			if(ch[map[v][i].first]==0){
				ch[map[v][i].first]=1;
				DFS(map[v][i].first, sum+map[v][i].second);
				ch[map[v][i].first]=0;
			}
		}
    }
}
int main()
{

    int m, a, b, c, i;

    scanf("%d %d", &n, &m);

    for (i = 1; i <= m; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        map[a].push_back(make_pair(b, c));
    }

    ch[1] = 1;
    DFS(1, 0);
    printf("%d\n", cost);

    // pair : make_pair 예제
    // pair<int, int> p;
    // pair<int, char> q;
    // p = make_pair(10,20);
    // q = make_pair(10,'T');

    // printf("%d %d\n", p.first, p.second);
    // printf("%d %c\n", q.first, q.second);
    return 0;
}