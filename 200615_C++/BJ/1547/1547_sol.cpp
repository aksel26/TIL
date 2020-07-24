#include <iostream>

using namespace std;

int main()
{
    int size,point= 1;

    cin>>size;

    for (int i = 0; i < size; i++)
    {
        int a, b;
        cin>>a>>b;

        if(a== point) point = b;
        else if(b == point) point =a;
    }

    cout<<point;
    

    return 0;
}