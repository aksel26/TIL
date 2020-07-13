# BOJ 10872

## 팩토리얼

### 문제

<img src="readme.assets/image-20200713133042093.png" alt="image-20200713133042093" width="70%" />

</br>

### 소스코드

```c++
#include <iostream>

using namespace std;

int n;
int factorial(int num)
{
    if (num <= 1)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}
int main()
{
    int result;
    int n;
    cin >> n;
    result = factorial(n);
    cout << result << endl;
    return 0;
}
```



