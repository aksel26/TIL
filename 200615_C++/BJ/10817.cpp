#include <iostream>

using namespace std;

int main()
{


    int a, b, c, small = 0, big = 0,res = 0;

    cin>>a>>b>>c;

    a > b ? big = a : small = b;
    small > c ? res = big : res = small;

    cout<<res<<endl;

    return 0;
}
