# BOJ 2231

## 분해합

### 문제

<img src="readme.assets/image-20200903173512862.png" alt="image-20200903173512862" width ="70%"/>

</br> 

### 소스

```c++
#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int temp = 0;
    int result = 0;

    for (int i = 1; i < n; i++)
    {
        result = i;

        int n2 = i;
        while (n2 != 0)
        {
            result += (n2 % 10);
            n2 = n2 / 10;
        }


        if (result == n)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
```

