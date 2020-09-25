# BOJ 10773

## 제로

### 문제

<img src="readme.assets/image-20200925155032289.png" alt="image-20200925155032289" width ="70%" />

<br/> 

### 코드

```c++
#include <iostream>
#include <stack>

using namespace std;

int main()
{

    int k, n;
  // 숫자 갯수
    cin >> k;
    stack<int> st;
  
    for (int i = 0; i < k; i++)
    {
        cin >> n;
     // 입력 숫자가 0이 아닐 경우에만 push
        if (n != 0)
        {
            st.push(n);
        }
      // 0 이면 pop
        else if (n == 0)
        {
            st.pop();
        }
    }
    int sum = 0;

  // 최상위 요소를 합해주고 0이될 때까지 빼준다
    while (!st.empty())
    {
        sum += st.top();
        st.pop();
    }
    cout << sum << endl;

    return 0;
}
```

