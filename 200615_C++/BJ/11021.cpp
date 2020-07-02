#include <iostream>

using namespace std;

int main()
{

    int tcase, a, b;
    cin >> tcase;

    for (int i = 1; i <= tcase; i++)
    {
        cin >> a >> b;

        cout << "Case #" << i << ": " << a + b << "\n";
    }

    return 0;
}