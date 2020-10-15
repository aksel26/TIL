#include <stdio.h>
#include <stdlib.h>

int main()
{
// 항상 포인터로 사용해야 한다.
// 대표번지가 리턴되기 때문
    int i, *p, n = 10, m = 20;



// sizeof(int) : 32bit : 4byte 
// n = 10
// n * sizeof(int) = 40byte 할당
// OS메모리 매니저가 실패할 경우가 존재하기 때문에 if문으로 에러 처리
    if ((p = (int *)malloc(n * sizeof(int))) == NULL)
    {
        perror("malloc memory allocation failed.");
        exit(0);
    }

    for (i = 0; i < n; i++)
    {
        p[i] = i;
    }

    if ((p = (int *)realloc(p, (n + m) * sizeof(int))) == NULL)
    {
        perror("realloc memory allocation failed.");
        exit(0);
    }

    for (i = n; i < n + m; i++)
    {
        p[i] = i;
    }

    for (i = 0; i < n + m; i++)
    {
        printf("%d\n", p[i]);
    }

    free(p);

    return 0;
}