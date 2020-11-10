#include <stdio.h>


int stack[100];
int top = -1;
int push(int x)
{

    stack[++top] = x;
}

int pop()
{

    return stack[top--];
}

int main()
{

    int n, k;

    scanf("%d %d", &n, &k);

    char a[20] = "0123456789ABCDEF";

    while (n > 0)
    {
        push(n % k);

        n = n / k;
    }

    while (top != -1)
    {
        printf("%c ", a[pop()]);
    }

    return 0;
}