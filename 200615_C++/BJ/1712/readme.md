# BOJ 1712

## 손익분기점

### 문제

<img src="readme.assets/image-20200713124705796.png" alt="image-20200713124705796" width="70%"/>

</br>

#### 소스코드

```c++
#include <iostream>
#include <string>

using namespace std;

int main()
{

    int a, b, c, result = 0;

    cin >> a >> b >> c;

    if (c - b <= 0)
    {
        result = -1;
    }
    else
    {
        result = (a / (c - b) + 1);
    }
    cout << result << endl;

    return 0;
}

```

