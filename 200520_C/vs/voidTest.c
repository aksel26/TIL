#include <stdio.h>
#include <string.h>

void swap( char* type, void* a, void* b);

int main(void){
     int a, b;

    a= 5;
    b = 10;

    swap("int", &a, &b);

    printf("main() : a = %d\tb = %d\n", a, b);

    char c, d;

    c = 'A';
    d = 'B';
    swap("char", &c, &d);
    printf("main() : c = %c\td = %c\n", c, d);

    double e,f;

    e = 1.2345;
    f = 9.8765;

    swap("double", &e, &f);
    printf("main() : e = %f\tf = %f\n", e, f);

    
    return 0;
}

void swap(char* type, void* a, void* b){

    int temp;
    char ctemp;
    double dtemp;

    if(!strcmp(type,"int")){
        temp = *(int*)a;
        *(int*)a = *(int*)b;
        *(int*)b = temp;
    }else if(!strcmp(type,"char")){
        temp = *(char*)a;
        *(char*)a = *(char*)b;
        *(char*)b = temp;
    }else if(!strcmp(type, "double")){
        temp = *(double*)a;
        *(double*)a = *(double*)b;
        *(double*)b = temp;
    }
}