#include <stdio.h>

int main(){


    int size[6];
    int array[30] = {1, 3, 2, 4, 3, 2, 5, 3, 1, 2,
                     3, 4, 4, 3, 5, 1, 2, 3, 5, 2,
                     3, 1, 4, 3, 5, 1, 2, 1, 1, 1};

    for (int i = 1; i <= 5; i++)
    {
        size[i] = 0;
    }

    for (int i = 0; i < 30; i++)
    {
        size[array[i]]++;
    }

    for (int i = 1; i <= 5; i++)
    {
        if(size[i] != 0 ){
            for (int j = 0; j < size[i]; j++)
            {
                printf("%d ", i );
            }
            
        }
    }
    
    
    
    return 0;
    
}