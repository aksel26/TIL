# DFS (Depth First Search)

<u>**보다 깊은 것을 우선적으로 탐색하는 알고리즘**</u>

- 맹목적으로 각 노드를 탐색할 때 주로 사용됨

- **스택 사용**

- **재귀함수** 사용 가능 ( 컴퓨터는 구조적으로 항상 스택의 원리를 사용하기 때문 )

- *예시*

  ```c++
  #include <iostream>
  // #include <stack>
  #include <vector>
  
  using namespace std;
  int number = 7;
  int c[7];
  vector<int> a[8];
  
  void dfs(int x)
  {
      if (c[x])
          return;
      c[x] = true;
      cout << x << ' ';
  
      for (int i = 0; i < a[x].size(); i++)
      {
          int y = a[x][i];
          dfs(y);
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
  
      dfs(1);
  
      return 0;
  }
  
  ```

  

