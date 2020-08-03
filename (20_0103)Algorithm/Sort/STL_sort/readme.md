# STL_sort()

- **헤더파일** 

  : `#include <algorithm>`


- **`sort(배열 시작 주소, 시작주소 + (배열 크기 +1), 비교함수(option)); `** 

</br> 

1. [배열 단순 정렬](#1-배열-단순-정렬)
2. [클래스 단위](#데이터를-묶어서--정렬하는-방법-객체)
3. [Pair Library](#pair-library)

</br> 

### 1. 배열 단순 정렬

- ### 비교함수

  ```c++
  bool compare(int a, int b)
      {
          // return a < b;
          // a가 b보다 작을때 true --> 오름차순 정렬
          // default 
  
          return a>b;
          // 내림차순 정렬
      }
  ```

  - 기본적으로 <u>오름차순</u> 정렬

  </br> 

- ### 예제 코드

  ```c++
  #include <iostream>
  #include <algorithm>
  
  using namespace std;
  bool compare(int a, int b)
      {
          // return a < b;
          // a가 b보다 작을때 true --> 오름차순 정렬
          // default 
  
          return a>b;
          // 내림차순 정렬
      }
  int main()
  {
      int a[10] = {1, 2, 4, 5, 9, 93, 34, 2, 1, 2};
  
      
  
      sort(a, a + 10, compare);
  
      for (int i = 0; i < 10; i++)
      {
          cout << a[i] << endl;
      }
  
      return 0;
  }
  ```

  </br> 

## 데이터를 묶어서  정렬하는 방법 (객체)

- 실무에서는 객체단위로 다루기 때문에 실무에 가장 가까운 사용.

- 배운것들

  1. 객체를 **프로퍼티 기준으로 정렬**하는 방법.
  2. **연산자 오버로딩**
     Student클래스에서는 `<` 에 대한 연산이 정의되어 있지 않은 상태이다.</br>
     *(Sort함수는 기분이 내림차순이기 때문에 '<` 인 연산만 정의되어 이씩 때문)*

  

```c++
#include <iostream>
#include <algorithm>
using namespace std;

//여러개의 변수를 묶기 위해 사용 == 하나의 객체를 정의하기 위해 사용
class Student
{
public:
    string name;
    int score;

    Student(string name, int score)
    {
        this->name = name;
        this->score = score;
    }

  // 연산자 오버로딩
    bool operator<(const Student &student) const
    {
        return this->score < student.score;
    }
};

bool compare(int a, int b)
{
    return a > b;
}

int main()
{
   
    Student students[] = {
        Student("유재석", 90),
        Student("박명수", 88),
        Student("노홍철", 98),
        Student("정형돈", 91)};

    sort(students, students + 5);

    for (int i = 0; i < 4; i++)
    {
        cout << students[i].name << endl;
    }

    return 0;
}
```

</br> 

## Pair Library

--> *클래스를 정의하는 방식은 프로그래밍 속도에서는 불리하다.*
</br>
</br>

**페어(Pair) 라이브러리**를 사용하면 더 효율적

- **헤더파일**

  `#include <vector>` <</br> 

  *참고)* *벡터라이브러리 혹은 배열을 사용할 것인지의 선택은 자연스럽게 알게 된다.*

</br> 

- **정렬 기분이 1개일 경우**

  ```c++
  #include <iostream>
  #include <algorithm>
  #include <vector>
  
  using namespace std;
  
  int main()
  {
  
      vector<pair<int, string>> v;
  
     // pair는 first(int부분), second(string부분) 의 정보를 갖고 있다.
      v.push_back(pair<int, string>(90, "박명수"));
      v.push_back(pair<int, string>(93, "유재석"));
      v.push_back(pair<int, string>(91, "정준하"));
      v.push_back(pair<int, string>(92, "노홍철"));
  
  
      //벡터의 첫번째 값부터 마지막 값까지 정렬해라.
      sort(v.begin(), v.end());
      for (int i = 0; i < v.size(); i++)
      {
          cout << v[i].second << ' ';
      }
  
      return 0;
  }
  ```

  </br> 

- **정렬 기준이 2개인 경우**

  --> 이중 Pair

  ```c++
  #include <iostream>
  #include <algorithm>
  #include <vector>
  
  using namespace std;
  
  bool compare(pair<string, pair<int, int>> a,
               pair<string, pair<int, int>> b)
  {
      if (a.second.first == b.second.first)
      {
          return a.second.second > b.second.second;
      }
      else
      {
          return a.second.first > b.second.first;
      }
  }
  
  int main()
  {
  
      vector<pair<string, pair<int, int>>> v;
  
      v.push_back(pair<string, pair<int, int>>("박명수", make_pair(98, 19920912)));
      v.push_back(pair<string, pair<int, int>>("유재석", make_pair(97, 19960913)));
      v.push_back(pair<string, pair<int, int>>("하하", make_pair(95, 19930203)));
      v.push_back(pair<string, pair<int, int>>("정형돈", make_pair(90, 19921207)));
      v.push_back(pair<string, pair<int, int>>("노홍철", make_pair(88, 19900302)));
  
      sort(v.begin(), v.end(), compare);
  
      for (int i = 0; i < v.size(); i++)
      {
          cout << v[i].first << ' ';
      }
  
      return 0;
  }
  ```

  </br> 

- *기준이 3개일 경우 클래스를 직접 정의하는게 효과적인 경우가 많다.*
