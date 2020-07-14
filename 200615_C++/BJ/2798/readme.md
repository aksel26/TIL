# BOJ 2798

## 블랙잭

### 문제

<img src="readme.assets/image-20200714211538425.png" alt="image-20200714211538425" width="70%"/>

</br>

### 소스코드

```c++
#include <iostream>

using namespace std;
int main()
{

    int card, max = -100000, limit, result;
//  카드 수와 가장 큰 제한 수 입력
    cin >> card >> limit;
  
//  카드 수 크기만큼 배열 할당 
    int arr[card];
  //카드 값 입력
    int num;
  //최댓값
    int sum = 0;
  
//  카드 숫자를 배열에 넣기
    for (int i = 0; i < card; i++)
    {
        cin >> num;
        arr[i] = num;
    }
  
  //3개의 카드 수를 합한 수 중 limit의 수 이하의 최대값을 구한다.
    for (int i = 0; i <= card - 3; i++)
    {
        for (int j = i + 1; j <= card - 2; j++)
        {
            for (int k = j + 1; k <= card - 1; k++)
            {
              //최댓값
                sum = arr[i] + arr[j] + arr[k];
							// limit 이하의 수로 제한하는 조건
                if (sum <= limit)
                {
                  // 그 중 최댓값을 구하는 조건
                    if (sum > max)
                    {
                        max = sum;
                    }
                }
            }
        }
    }

//  최댓값 출력
    cout << max << endl;

    return 0;
}
```



- 
- 카드값 배열 중 3개를 인덱스 경우의 수대로 더하고 최댓값을 출력한다.