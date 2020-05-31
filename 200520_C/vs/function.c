#include <stdio.h>


// 보통 함수를 main위에다가 정의하지만,
// 밑에다가 정의할 경우 위에 이렇게 꼭 명시해 주어야한다.

void prntStar(int n ){
    int i, j;

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j <=  i; j++)
        {
            printf("*");
        }
        printf("\n")   ;
    }
    
}


int abs (int x);


int main (){
    int n;
    scanf("%d", &n);
    prntStar(n);

    int a; 
    a = -3;
    printf("%d\n", abs(a));
    

    return 0 ;
}

int abs(int x){
    if( x< 0) return x* -1;
    else return x;
}


