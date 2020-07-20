#include <iostream>

using namespace std;

int main()
{

    int l, a, b, c, d;
    int cnt = 0;
    cin >> l >> a >> b >> c >> d;

    int temp1 = l - (a/ c);
    if(a % c){
        temp1--;
    }

    int temp2 = l - (b /d);
    if(b%d){
        temp2--;
    }

    cout<<min(temp1,temp2)<<endl;

    return 0;
}