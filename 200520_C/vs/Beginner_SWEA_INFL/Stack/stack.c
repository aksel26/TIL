#include <stdio.h>

int stack[100];

int top = -1;

void push(int item)
{
    if (top >= 99)
        return;
    else
        stack[++top] = item;
}

int pop()
{
    if (top == -1)
    {
        printf("already empty");
        return 0;
    }
    else
    {
        return stack[top--];
    }
}
int main()
{

    int item;

    push(1);

    push(2);

    push(3);

    item = pop();
    printf("pop item => %d\n", item);

    item = pop();
    printf("pop item => %d\n", item);
    item = pop();
    printf("pop item => %d\n", item);
    return 0;
}