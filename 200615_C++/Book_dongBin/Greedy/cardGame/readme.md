# 카드게임

### 코드

```c++
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    // 최솟값 비교 변수
    int min = 100;

    // 최댓값 비교 변수
    int max = -100;

    // 결과값
    int result = 0;

    // 2차 배열
    int arr[n][m];

    // 각 행마다의 최솟값을 담을 배열
    int temp[n];

    // 행, 열 수 입력
    cin >> n >> m;

    // 각 행, 열 값 넣기
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            // 각 행마다의 최솟값을 구한다.
            if (min > arr[i][j])
            {
                min = arr[i][j];
            }

            // 최솟값을 임시 배열에 넣는다.
            temp[i] = min;
        }

        // 다음 행에서의 비교를 위해 초기화
        min = 100;
    }

    // 임시배열 안에서의 최댓값 구하기
    for (int i = 0; i < n; i++)
    {
        if (temp[i] > max)
        {
            result = temp[i];
        }
    }

    // 결과 출력
    cout << result << endl;

    return 0;
}
```

</br> 

#### 해결 방법

1. 2차원 배열을 만들고,
2. 그 안에 값을 넣는다.
3. 각 행마다 최솟값을 구하고
4. 그 최솟값을 임시 배열에 넣는 방법을 반복
5. 임시배열 안에서의 최댓값을 구한다.

</br> 

##### 참고용

```c++
#include <iostream>
#include <algorithm>

using namespace std;

int result;
int n, m;
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int minVal = 10001;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;

            minVal = min(minVal, x);
        }
        result = max(result, minVal);
    }
    cout << result << endl;
}
```

</br> 

- 2차원 배열까지 생각하지 않아도 됬었다.

  --> *행렬의 위치 정보가 중요한 것도 아니니까*



- **Min,Max 함수**를 이용해서 최대, 최솟값을 구하고 약간 **재귀개념**을 활용한 것 같다.
  - 코딩할때도 결과 값을 바로 다음 수와 비교하고 싶었는데 막혔다..  이럴 경우 재귀 개념을 잘 활용하면 될 것 같다. 