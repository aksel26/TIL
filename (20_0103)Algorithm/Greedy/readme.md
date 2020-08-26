# Greedy Algorithm

- **거스름돈 문제**를 구하는 문제가 가장 대표적인 예
- **Greedy** : 어떠한 한가지 경우만을 향해 쫓는다는 의미

- *최적해를 보장해주지 못하는 경우가 많다.*

  </br> 

## 코드

- *예 ) 1260원 거스름돈 거슬러주기*

```c++
#include <iostream>

using namespace std;

int main()
{
    int n, result = 0;

    cin >> n;

    result += n / 500;

    n %= 500;

    result += n / 100;

    n %= 100;

    result += n / 50;

    n %= 50;

    result += n / 10;

    cout << result << '\n';

    return 0;
}
```

