# Vector

- ### 헤더파일

  `#include <vector>`

  </br> 

- ### 선언

**`vector<int> array;`** 

*참고
`array<int,5> array;` 사이즈를 반드시 적어주어야 했다.*

</br> 

- ### 장점

  1. 사이즈를 그때그때 바꿀 수 있다.

  2. 메모리를 알아서 지워준다.

  3. 자신의 길이 (사이즈)를 기억한다. (`arr.size()`로 알 수 있다.)

     </br> 

- ### *예시*

  ```c++
  #include <iostream>
  #include <vector>
  
  using namespace std;
  
  int main()
  {
  
  
      // vertor 사이즈
      vector<int> array2 = {1, 2, 3, 4, 5};
  
      cout << array2.size() << endl;
  
      vector<int> array3 = {1, 2, 3};
  
      cout << array3.size() << endl;
  
      vector<int> array4{1, 2, 3};
  
      cout << array4.size() << endl;
  
  
      vector<int> arr{1, 2, 3, 6, 7, 9};
  
    	// 벡터 리사이즈 가능.
      // arr.resize(10);
  
      // 벡터 출력 방법 1
      for (auto i : arr)
      {
          cout << i << ' ';
      }
      cout << '\n';
    
      // 배벡터출력 방법 2
      for (auto &itr : arr)
      {
          cout << itr << ' ';
      }
      cout << endl;
  
      //벡터 요소 출력
      cout << array2[1] << endl;
      cout << array2.at(2) << endl;
  
  
      // 동적 배열과 비교 (메모리 삭제 관련)
      int *my_arr = new int[5];
      delete[] my_arr; //꼭 지워주어야 한다
  
      return 0;
  }
  
  ```

  

- ### 이중 벡터 예시

  ```c++
  #include <iostream>
  #include <vector>
  
  using namespace std;
  
  int main()
  {
  
      int n;
    
  //  이중벡터 선언
      vector<vector<int>> arr;
  
      cin >> n;
  
    
    // n으로 초기화
      for (int i = 0; i < n; i++)
      {
          vector<int> element(n);
          arr.push_back(element);
      }
  
    
      cout << arr.size() << endl; // 5
  
    
    // n 으로 도배
      for (int i = 0; i < n; i++)
      {
          // cout<<arr[i].size()<<", ";
          for (int j = 0; j < n; j++)
          {
              arr[i][j] = n;
          }
      }
  
      cout << '\n';
  
    // 결과 값 출력
      for (int i = 0; i < n; i++)
      {
          for (int j = 0; j < n; j++)
          {
              cout << arr[i][j] << " ";
          }
          cout << endl;
      }
    
  // 5 5 5 5 5 
  // 5 5 5 5 5 
  // 5 5 5 5 5 
  // 5 5 5 5 5 
  // 5 5 5 5 5 
  
    
    // 0으로 초기화 프레임만 남기고 값은 삭제된다.
      for (int i = 0; i < n; i++)
      {
          arr[i].clear();
          cout << arr[i].size() << ","; // 0,0,0,0,0
      }
      cout << endl;
  
    
    // 배열 삭제
      arr.clear();
  
      cout << arr.size() << endl; //0
  
      return 0;
  }
  
  ```

  