#include <stdio.h>

void tmp(int x)
{
    // 방법 1.

    if (x == 0)
        return; // 종료지점
    else{
        
         tmp(x -1);
         printf("%d ", x); // 1 2 3 출력

         // printf("%d ", x); // 3 2 1 출력
         // tmp(x -1);

    }

    // 방법 2.
    // if (x > 0) // 종료지점
    // {
    //     printf("%d ", x);
    //     return tmp(x - 1);
    // }
}

int main()
{
    int n;

    scanf("%d", &n);

    tmp(n);
    return 0;
}