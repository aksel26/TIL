#include <iostream>

using namespace std;

int main(){

    union KEY{
    // 전체 크기는 4바이트로 전체는 input멤버로 각 한바이트마다 byte배열 멤버로 접근
        unsigned int input;
        unsigned char byte[4];

    };


    KEY key;
    key.input = 0xc0a86401;

    int i ;

    for ( i = 3; i >= 0; i--)
    {
        cout<<(int)key.byte[i]<<endl;

    }

    return 0;
    


}