#include <iostream>
#include <cstring>
#include <string.h>  

using namespace std;

struct Type
{
    int no;
    char name[20];
};



//기본 함수 템플ㄹ릿
template <typename T>
T max(T &x, T &y);

//특수 함수 템플릿
template <>
Type max(Type &x, Type &y);

//일반함수
char* max(char* x, char* y);

int main()
{
    cout << "max(10,20) = " << max(10, 20) << endl;
    cout << "max(7.5,6.8) = " << max(7.5, 6.8) << endl;
    cout << "max(\"hello\",\"hi\") = " << max((char*)"hello",(char*)"hi") << endl;
    
    
    Type x;
    strcpy(x.name,"Kim");
    x.no = 10;

    Type y;
    strcpy(y.name,"Lee");
    y.no = 20;

    Type z= max(x,y);
    cout<<"max(Type x, Type y) = " << z.no<<", " <<z.name<<endl;
    return 0;
}


//기본 함수 템플ㄹ릿
template <typename T>
T max(T &x, T &y){
    return (x>y)?x:y;
}

//일반함수
char *max(char *x, char *y){
    return (strcmp(x,y)>0)? x:y;
}

//특수 함수 템플릿
template<>
Type max(Type &x, Type &y){
    return (x.no > y.no) ? x:y;
}

