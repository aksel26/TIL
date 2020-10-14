#include <stdio.h>

int ch[101];
int main()
{

    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        int tmp = a[i] - a[i + 1];

        // 절댓값 변환
        if (tmp < 0)
            tmp *= -1;

        // 중복값 처리를 위한 배열
        if (ch[tmp] == 0)
        {
            ch[tmp] = 1;
        }

        // 중복값 존재
        else if (ch[tmp] != 0)
        {
            printf("NO\n");
            return 0;
        }

        // 차이가 n보다 클 경우
        else if (tmp > n)
        {
            printf("NO\n");
            return 0;
        }
    }
    
    printf("YES\n");

    for (int i = 1; i <= n + 1; i++)
    {
        printf("%d ", ch[i]);
    }

    return 0;
}