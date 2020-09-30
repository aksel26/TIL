# 순열과 조합

## 경우의 수 

1. 합의 법칙 : 분류
   - 분류의 조건
     - 동시에 일어나지 않음
     - 하나도 빠짐없이 포함되어야 함

2. 곱의 법칙 : 동시에 일어나는 일 (함께 일어나는 일)

<br/> 

## 순열 (permutation)

- **순서가 있는** 나열

- nPr

  n개중에서 r개를 뽑아 일렬로 나열하는 경우의 수

- **`nPr = n! / (n-r)!`** 

STL함수 이용

- **`next_permutation`**   활용

  - nPn(전부 뽑는 경우) 을 구한상태에서 r크기 까지만 저장한다.

    : nPn과 시간복잡도가 같다는 단점

  - 초기화가 필요하다.

```c++
#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n = 4;
    int r = 3;
    vector<int> set;
  
  // 초기화	
    for (int i = 0; i < n; i++)
    {
        set.push_back(i);
    }

    do
    {
        for (int i = 0; i < r; i++)
        {
            cout << set[i] << ' ';
        }
        cout << '\n';
    } while (next_permutation(set.begin(), set.end()));

    return 0;
}



// 결과 
// 0 1 2 
// 0 1 3 
// 0 2 1 
// 0 2 3 
// 0 3 1 
// 0 3 2 
// 1 0 2 
// 1 0 3 
// 1 2 0 
// 1 2 3 
// 1 3 0 
// 1 3 2 
// 2 0 1 
// 2 0 3 
// 2 1 0 
// 2 1 3 
// 2 3 0 
// 2 3 1 
// 3 0 1 
// 3 0 2 
// 3 1 0 
// 3 1 2 
// 3 2 0 
// 3 2 1 
```

<br/> 

## 조합(Combinatin)

- 순서를 고려하지 않고 선택하는 방법의 수
- nCr
  - n개중에서 r개를 순서에 상관없이 선택하는 방법의 수 
  - **`nCr = nPr / r! = n! / (n-r)!r!`** 

- **`next_permutation`**   활용
  - n크기 배열에서 r 개수만큼 1을 배열 뒤에서부터 삽입하고 나머지를  0으로 채운다



```c++
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> set;
    int n = 3;
    int r = 2;
    for (int j = 0; j < n - r; j++)
    {
        set.push_back(0);
    }
    for (int j = 0; j < r; j++)
    {
        set.push_back(1);
    }

    do
    {
        for (int j = 0; j < n; j++)
        {
            if (set[j])
            {
                cout << j << ' ';
            }
        }
        cout << '\n';

    } while (next_permutation(set.begin(), set.end()));

    return 0;
}


    // 결과
    // 2 3 4 
    // 1 3 4 
    // 1 2 4 
    // 1 2 3 
    // 0 3 4 
    // 0 2 4 
    // 0 2 3 
    // 0 1 4 
    // 0 1 3 
    // 0 1 2 
```

