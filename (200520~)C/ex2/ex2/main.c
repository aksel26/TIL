//
//  main.c
//  ex2
//
//  Created by hxmkim on 2020/05/20.
//  Copyright © 2020 hxmkim. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int input, price;
    
    scanf("%d %d", &input,&price);
    int exchange = input- price;
    
    printf("%d\n%d\n%d\n",exchange, exchange/500, exchange%500/100);
    
    
    
    
    
    
    
    return 0;
}
