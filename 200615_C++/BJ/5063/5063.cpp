#include <iostream>

using namespace std;

int main()
{
    int r, e, c;
    int tcase;
    cin>>tcase;
    for (int i = 0; i < tcase; i++)
    {
        cin >> r >> e >> c;

        if (e - c > r)
        {
            cout << "advertise" << endl;
        }
        else if (e - c == r)
        {
            cout << "does not matter" << endl;
        }
        else if (e - c < r)
        {
            cout << "do not advertise" << endl;
        }
        /* code */
    }

    return 0;
}