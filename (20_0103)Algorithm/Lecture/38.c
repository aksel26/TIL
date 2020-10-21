#include <stdio.h>
int a[101];
int main(){
    int n, i ,j ,pos, num, input;
    scanf("%d", &n);

    for ( i = 0; i < n; i++)
    {
        scanf("%d" , &num);
        
        pos = num;

        a[pos] = i + 1;

    }

    for ( i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
    

    return 0;   
}