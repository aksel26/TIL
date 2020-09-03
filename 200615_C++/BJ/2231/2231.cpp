#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int temp = 0;
    int result = 0;

    for (int i = 1; i < n; i++)
    {
        result = i;

        int n2 = i;
        while (n2 != 0)
        {
            result += (n2 % 10);
            n2 = n2 / 10;
        }

        // result = n2 + temp;
        if (result == n)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}