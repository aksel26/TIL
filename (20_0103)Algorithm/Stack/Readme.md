# Stack

- Stack : 택배 상하차
- Queue : 은행창구

- 알고리즘대회나 테스트에서는 시간이 부족하기 때문에 보통 Stack을 직접 구현하는 것보다 **라이브러리를 가져오는 경우가 많다.**

- 헤더파일 

  `#include <stack>`

- *예제*

  ```c++
  #include <iostream>
  #include <stack>
  
  using namespace std;
  
  int main()
  {
      stack<int> s;
  
      s.push(7);
      s.push(6);
      s.push(5);
  
      s.pop();
  
      s.push(6);
  
      s.pop();
  
  
      while(!s.empty()){
          cout<<s.top()<<' ';
          s.pop();
      }
  
      return 0;
  }
  ```

  