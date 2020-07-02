#include <iostream>

using namespace std;

int main()
{
    int h, m;
    cin >> h >> m;

    int min, temp;

    temp = m - 45;
    min = temp + 60;
    if (temp < 0)
    {
        if (h == 0)
        {
            h = 23;
        }
        else
        {
            h--;
        }

        cout << h << " " << min << endl;
    }
    else
    {

        cout << h << " " << temp << endl;
    }

    return 0;
}