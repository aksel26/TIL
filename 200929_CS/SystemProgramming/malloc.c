#include <stdio.h>
#include <stdlib.h>

int main()
{

//bss Segment에 잡히게 된다.
    int *Ps, j;

// data segment에 잡히게 된다
    int i32Num = 20;

    // 런타임시 heap메모리에 잡히게 된다. --> static allocation과의 결정적인 차이
    if ((Ps = (int *)malloc(i32Num * sizeof(int))) == NULL)
    {
        perror("malloc memory allocation failed.");
        exit(0);
    }

    for (j = 0; j < i32Num; j++)
    {
        Ps[j] = j;
    }

    free(Ps);



//bss Segment에 잡히게 된다.
    int ps[20], j;
    for ( j = 0; j < i32Num; j++)
    {
        pS[j] = j;
    }
    

    return 0;
}