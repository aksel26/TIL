# 에라토스테네스의 체

### 기존 소수 판별 코드1.

```c++
#include <stdio.h>

bool isPrime(int x)
{
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main()
{

    printf("%d\n", isPrime(97));

    return 0;
}
```

시간복잡도는 **`O(n)`**

- 문제점 

  x까지의 숫자를 하나하나 비교해야 한다는 점에서 비효율적.



</br> 

### 기존 소수 판별 코드2.

```c++
#include <stdio.h>
#include <math.h>

// 비소수는가 대칭형이라는 점을 이용해 제곱근으로 end범위를 구함.
bool isPrime(int x)
{
    int end = (int)sqrt(x);
    for (int i = 2; i <= end; i++)
    {
        if (x % 2 == 0)
            return false;
    }

    return true;
}
int main(void)
{
    printf("%d\n", isPrime(97));
    return 0;
}

```

**--> 보완 : 제곱근 이용**

비소수는 곱의 형태가 **대칭형**이라는 점을 이용해 제곱근으로 end범위를 구함.

`8 = 1 , 2, 4, 8 / 1 , 4 ,2, 8`

</br> 

## 많은 수의 소수를 추려내려면 ???????

이때 사용되는 알고리즘이 **에라토스테네스의 채**

</br> 

### 코드

```c++
#include <stdio.h>

int number = 1000;
int a[100001];

void primeNumSieve()
{

    for (int i = 2; i <= number; i++)
    {
        a[i] = i;
    }

    for (int i = 2; i <= number; i++)
    {
        if (a[i] == 0)
            continue;
        for (int j = i + i; j <= number; j += i)
        {
            // 지워준다는 의미.
            a[j] = 0;
        }
    }

    for (int i = 2; i <= number; i++)
    {
        if (a[i] != 0)
            printf("%d\n", a[i]);
    }
}

int main(int argc, char const *argv[])
{

    primeNumSieve();
    return 0;
}

```

