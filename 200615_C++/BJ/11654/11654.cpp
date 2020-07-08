#include <iostream>
// #include <stdio.h>

using namespace std;

int main(){
    // 방법 1 : C , printf이용
    // char input;

    // scanf("%c", &input);
    // printf("%d\n", input);


    // 방법 2 : C++
    char input;
    int iInput;
    cin>>input;

    iInput = (int)input;
    cout<<iInput<<endl;
    return 0;
}