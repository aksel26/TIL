#include <stdio.h>

struct Score
{
    int num, math, eng,c;
};


int main(){

    int i, n, max = 0 ;

    scanf("%d", &n);
    struct Score score[4];

    for ( i = 0; i < n; i++)
    {
        scanf("%d", &score[i].num);
        scanf("%d", &score[i].math);
        scanf("%d", &score[i].eng);
        scanf("%d", &score[i].c);

    }

    for ( i = 0; i < n-1; i++)
    {
        if(score[i].math > score[i+1].math){
            max = score[i].c;
            printf("%d\n", max);
        }
    }
    // 입력
    // 3
    // 1 90 80 92 
    // 2 92 93 97
    // 3 89 90 92
    // 출력
    // 97
    


    
    

    return 0;
}
