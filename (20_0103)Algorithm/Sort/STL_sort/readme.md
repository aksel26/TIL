# STL_sort()

</br> 

- **헤더파일** 

  : `#include <algorithm>`

  </br> 

- **`sort(배열 시작 주소, 시작주소 + (배열 크기 +1), 비교함수(option)); `** 

  </br> 

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

## 데이터를 묶어서  정려하는 방법 (객체)

- 실무에서는 객체단위로 다루기 때문에 실무에 가장 가까운 사용.

- 배운것들

  1. 객체를 **프로퍼티 기준으로 정렬**하는 방법.
  2. **연산자 오버로딩**
     Student클래스에서는 `<` 에 대한 연산이 정의되어 있지 않은 상태이다.
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

