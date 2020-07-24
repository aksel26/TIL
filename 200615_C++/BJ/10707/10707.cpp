#include <iostream>

using namespace std;

int main()
{

    int a, b, c, d, p;
    int resultA, resultB;
    cin >> a >> b >> c >> d >> p;

    resultA = a * p;

    if (c >= p)
    {
        resultB = b;
    }
    else if (c < p)
    {
        resultB = b + ((p - c) * d);
    }

    if (resultA > resultB)
    {
        cout << resultB << endl;
    }
    else
    {
        cout << resultA << endl;
    }

    return 0;
}