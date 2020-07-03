#include <iostream>

using namespace std;

int main()
{

    int a, b, c, tmp = 0;

    cin >> a >> b >> c;

    if (a > b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }
    tmp = 0;

    if (a > c)
    {
        tmp = a;
        a = c;
        c = tmp;
    }
    tmp = 0;
    if (b > c)
    {
        tmp = b;
        b = c;
        c = tmp;
    }

    cout << b << endl;

    return 0;
}
