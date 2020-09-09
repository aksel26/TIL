#include <string.h> 
#include <stdio.h>

int main(){

    char a[20];

    memset(a, 65, sizeof(a));


    for (int i = 0; i < (sizeof(a)/ sizeof(char)); i++)
    
    {
        printf("%c\n", a[i]);
    }
    
}