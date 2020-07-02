#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    for (int i = 10, j = 1; i <= 1000; i *= 10, j *= 10)
    {

        cout << a * ((b % i) / j) << endl;
    }

    cout << a * b << endl;

    return 0;
}