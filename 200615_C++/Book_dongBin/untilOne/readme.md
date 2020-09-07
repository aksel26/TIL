# 1이 될때까지

### 문제 요약

숫자 2개를 입력 받는다. (n , k)

n을 k로 나누었을 때, 나누어 떨어지면 연산을 수행하고,

나누어 떨어지지 않으면

n -1 을 한다.

이를 반복해서 1이 나오는 연산 횟수를 출력하는 문제.

</br> 

### 코드

```c++
#include <iostream>

using namespace std;

int main()
{

    int n, k, cnt = 0, temp;

    cin >> n >> k;

    while (n != 1)
    {
        if (n % k == 0)
        {
            n = n / k;
            cnt++;
        }
        else
        {
            n = n - 1;
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}
```

