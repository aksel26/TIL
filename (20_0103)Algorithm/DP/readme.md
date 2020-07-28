# Dynamic Programming



피보나치 수열을 예로 들면

재귀함수로 표현했을 때,

<u>**문제점.  중복되는 연산이 너무나 많게 된다.**</u>

*2^n 의 복잡도를 가지며, 만약 n이 50번째인 피보나치 수열을 구하면, 어마어마하게 복잡도가 올라간다.*

</br> 

===> <u>이를 해결하기 위해서 **메모이제이션 기법**을 사용한다.</u>

```c++
 int dp(int x)
 {
     if (x == 1)
         return 1;
     if (x == 2)
         return 1;
     return dp(x - 1) + dp(x - 2);
 }
```



---



먼저 메모이제이션을 위한 배열을 만들어준다.

배열에 **이미 값이 있을 경우 그대로 그 값을 리턴**해줘서, 연산해야하는 수고로움을 덜어준다.

*에라토스테네스의 체랑 비슷한 개념같다..*

```c++
#include <stdio.h>

// int dp(int x)
// {
//     if (x == 1)
//         return 1;
//     if (x == 2)
//         return 1;
//     return dp(x - 1) + dp(x - 2);
// }

//메모이제이션을 위한 배열
int d[100];

int dp(int x)
{
    if (x == 1)
        return 1;
    if (x == 2)
        return 1;
    if (d[x] != 0)
        return d[x];
    return d[x] = dp(x - 1) + dp(x - 2);
}
int main()
{

    printf("%d\n", dp(50));
    //-298632863 오버플로우 발생 (정수형 표현 범위 초과)
    return 0;
}
```

