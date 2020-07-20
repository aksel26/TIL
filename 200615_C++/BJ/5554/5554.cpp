#include <iostream>
using namespace std;
int main()
{
    double a, b, c, d;
    double aT, bT, cT, dT;

    double sum = 0;
    cin >> a >> b >> c >> d;

    aT = a / 60;
    bT = b / 60;
    cT = c / 60;
    dT = d / 60;
    
    sum = aT + bT + cT + dT;
    cout.precision(2);
    cout<<aT<<endl;
    cout<<bT<<endl;
    cout<<cT<<endl;
    cout<<dT<<endl;
    cout<<sum<<endl;

    return 0;
}