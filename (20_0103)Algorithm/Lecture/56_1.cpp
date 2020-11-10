#include <stdio.h>

void tmp(int x)
{

    if (x == 0)
        return; // 종료지점
    else
    {
        printf("%d ", x);
        return tmp(x - 1);
    }
}

int main()
{
    int n;

    scanf("%d", &n);

    tmp(n);
    return 0;
}