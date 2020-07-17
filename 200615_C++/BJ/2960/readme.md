# BOJ 2960

# 에라토스테네서의 체

### 문제

<img src="readme.assets/image-20200717232706637.png" alt="image-20200717232706637" width="70%" >

</br>

### 소스코드

```c++
#include <iostream>

using namespace std;
int arr[1000];
int main()
{

    int N, K, P, result = 0;
    cin >> N >> K;
	
//  배열에 숫자 2부터 차례로 넣기
    for (int i = 2; i <= N; i++)
    {
        arr[i - 2] = i;
    }

  // 소수 판별해 0(삭제)으로 만드는 부분
    for (int i = 0; i < N - 1; i++)
    {
      
//      0이 아닌값 (아직 삭제가 되지 않은)
        if (arr[i] != 0)
        {
            P = arr[i];
          	// 최소값 (2부터 차례로 3, ... ) 대입

          	// 넣은 인덱스 다음 인덱스부터 적용
            for (int j = i + 1; j < N - 1; j++)
            {
						
              // 최소값 배열에 0을 대입
                arr[i] = 0;
							// 다음 인덱스들이 최소값(P)와 나누어 떨어지면 0으로 대입
                if (arr[j] % P == 0)
                {
                  // 이미 0으로 대입되었다면 다음 인덱스로
                    if (arr[j] == 0)
                    {

                        continue;
                    }

                    arr[j] = 0;
                }
            }
        }
        
//      최소값이 0이면 다음 나눌 값의 인덱스로 이동
        else
        {
            continue;
        }
    }

    cout << result << endl;

    return 0;
}
```

</br>

- 소수를 판별해 삭제하는 작업은 완료하였다.
- 하지만, 그 순서에 맞게 몇번째로 어떤 숫자가 삭제되었는지는 출력하지 못함...

