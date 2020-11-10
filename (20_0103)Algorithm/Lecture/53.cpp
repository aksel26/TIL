#include <stdio.h>

#define MAX_STACK_SIZE 100

int stack[MAX_STACK_SIZE];

int top = -1;

// int isFull()
// {
//     if (MAX_STACK_SIZE - 1 <= top)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

void push(int x)
{

    // if (isFull() == true)
    // {
    //     printf("꽉 찼다.");
    // }

    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}

// int IsEmpty()
// {
//     if (top < 0)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
int main()
{

    int n, a, i;
    
    char str[20] = "0123456789ABCDEF";
    
    scanf("%d %d", &n, &a);

    int tmp;
    while (n > 0)
    {
        push(n % a);
        n = n / a;
    }
    while (top != -1)
    {
        printf("%c ", str[pop()]);
    }

    return 0;
}