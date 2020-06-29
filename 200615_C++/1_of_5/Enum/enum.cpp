#include <iostream>

using namespace std;
int main(){

    enum languages {c=10,java=20, python, go,scala} lan;

    lan = java;

    cout<<"java = " << lan <<endl;

    return 0;
}