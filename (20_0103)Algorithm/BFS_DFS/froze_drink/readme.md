# 음료수 얼려 먹기

## 코드

```c++
#include <iostream>

using namespace std;
int n, m;
int graph[1000][1000];

bool dfs(int x, int y)
{
	// 범위 밖으로 나가면 false
    if (x <= -1 || x >= n || y <= -1 || y >= m)
    {
        return false;
    }

  // 범위 안이고 0이면 연산 수행
    if (graph[x][y] == 0)
    {
      // 1로 변환
        graph[x][y] = 1;
      
      //dfs 재귀함수 연산, 상하좌우, 참고 ) 재귀함수는 스택 자료구조 순서로 수행된다.
        dfs(x - 1, y);
        dfs(x + 1, y);
        dfs(x, y - 1);
        dfs(x, y + 1);
        return true;
    }
    return false;
}

int main()
{

    cin >> n >> m;

  // 숫자 입력받기
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%1d", &graph[i][j]);
        }
    }

    int result = 0;

  
//  true값이면 아이스크림 수 증가
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (dfs(i, j))
                result += 1;
        }
    }

    cout << result << endl;

    return 0;
}
```

