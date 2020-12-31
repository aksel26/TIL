#include <iostream>

using namespace std;

int map[100][100];
// int test[13][13];
int main()
{

    int tcase;

    cin >> tcase;

    int w, h, order, x, y;
    int room = 1;
    int cnt = 0;

    while (tcase--)
    {
        cin >> h >> w >> order;
        x = order % h;

        y = order / h + 1;

        if (x == 0)
        {
            x = h;
        }

        if (!(order % h))
        {
            y -= 1;
        }

        cout << x * 100 + y << '\n';
    }

    return 0;
}