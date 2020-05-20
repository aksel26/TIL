//
//  main.c
//  ex2
//
//  Created by hxmkim on 2020/05/20.
//  Copyright © 2020 hxmkim. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(void) {
    
//   1. 자판기
//    int input, price;
    
//    scanf("%d %d", &input,&price);
//    int exchange = input- price;
    
//    printf("%d\n%d\n%d\n",exchange, exchange/500, exchange%500/100);
    
    
    
//   2. 반올림
//    double num;
//    scanf("%lf",  &num);
//    num = num * 10;
//    num = num+0.5;
//    num = (int)num;
//    num= num/10;
//    printf("%f\n", num);
    
    
//   3. 세 수의 평균
//    double A,B,C;
//    scanf("%lf %lf %lf", &A, &B, &C);
//    double result = (A+B+C) / 3;
//    result = result * 100;
//    result = result + 0.5;
//    result = (int)result;
//    result = result /100;
//    printf("%f\n", result);
    
//    11 19 23
//    17.670000
    
    
//   4. 연필 개수
//      : 올림 이용

//  *** Example *************************
//  올림 (ceil), 내림(floor), 반올림(round)
//    double a= 2.567;
//    printf("%f\n", ceil(a));
    // 3.000000
//    printf("%f", floor(a));
    // 2.000000
//  ************************************
    
//    double students ;
//    scanf("%lf", &students);
//    int result = ceil(students / 12);
//    printf("%d\n",result);
    
//    178
//    15
    
    
    
    int a = 3, b = 12, k;
    if( a>0){
        b++;
        k = a + b;
    }
    else{
        b--;
        k = a +b;
    }

    
    printf("%d\n", k );
    
    
    return 0;
}
