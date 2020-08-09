# BFS (Breadth First Search)

</br> 

**<u>탐색 시 너비를 우선으로 탐색을 수행하는 알고리즘</u>**

</br> 

- 가장 가까운 것부터 찾아 최단길이를 보장해야 할 때 사용된다. (Ex. 미로찾기 ... )

- 맹목적인 탐색
- **큐(Queue)** 로 사용

- BFS 자체는 **단순히 탐색 방법**이기 때문에 큰 의미는 없지만, 다른 알고리즘에 같이 응용되기 때문에 알아둘 필요가 있다.

- *예시*

  ```c++
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
  ```

  