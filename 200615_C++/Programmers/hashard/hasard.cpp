#include <string>
#include <vector>
#include <iostream>
#include <cstdlib>


using namespace std;

bool solution(int x)
{
    int dx = x;
    int sum = 0;

    while(x){
        sum += x % 10;
        x/= 10;
    }

    dx % sum == 0? true :false;
}


int main()
{

    solution(12);

    return 0;
}