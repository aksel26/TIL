# BOJ 1181

## 단어 정렬

### 문제

<img src="readme.assets/image-20200806171821185.png" alt="image-20200806171821185" width ="60%" />



</br> 

- 알고리즘 Sort메서드를 이용하여 정렬

- 기준을 정하기 위해 오버로딩

  ```c++
  bool compare(string a, string b)
  {
      if (a.length() > b.length())
      {
          return 0;
      }
      else if (a.length() < b.length())
      {
  
          return 1;
      }
      else
      {
          return a < b;
      }
  }
  ```

</br> 

### 소스코드

```c++
#include <iostream>
#include <algorithm>

using namespace std;

int num;
string arr[20000];

// 단어 길이 수에 따른 정렬 조건
bool compare(string a, string b)
{
    if (a.length() > b.length())
    {
        return 0;
    }
    else if (a.length() < b.length())
    {

        return 1;
    }
    else
    {
        return a < b;
    }
}

int main()
{

//  단어 갯수 입력
    cin >> num;

  
  // 단어 입력
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
  
  //단어 정렬
    sort(arr, arr + num, compare);

  
    for (int i = 0; i < num; i++)
    {
      //동일한 단어 출력 안하기
        if (i > 0 && arr[i] == arr[i - 1])
            continue;
        cout << arr[i] << '\n';
    }

    return 0;
}
```

