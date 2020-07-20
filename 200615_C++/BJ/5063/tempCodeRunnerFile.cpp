#include <iostream>

using namespace std;

int main()
{
    int r, e, c;
    int tcase;

    for (int i = 0; i < tcase; i++)
    {
        cin >> r >> e >> c;

        if (r - e < c)
        {
            cout << "advertise" << endl;
        }
        else if (r - c == c)
        {
            cout << "does not matter" << endl;
        }
        else if (r - c > c)
        {
            cout << "do not advertise" << endl;
        }
        /* code */
    }

    return 0;
}