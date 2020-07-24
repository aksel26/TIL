#include <iostream>

using namespace std;

int main()
{

    int now = 0, in, out, max = -100;
    int station[5];

    for (int i = 0; i < 4; i++)
    {
        cin >> out >> in;
        station[i] = now + in - out;
        now = station[i];
    }

    for (int i = 0; i < 4; i++)
    {
        if (station[i] > max)
        {
            max = station[i];
        }
    }
    cout << max << endl;

    return 0;
}