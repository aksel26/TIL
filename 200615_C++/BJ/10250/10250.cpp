#include <iostream>

using namespace std;

int map[100][100];
// int test[13][13];
int main()
{

    int tcase;

    cin >> tcase;

    int w, h, order;
    int room = 1;
    int cnt = 1;
    int k = order / h;

    for (int i = 0; i < tcase; i++)
    {
        cin >> h >> w >> order;

        for (int j = 1; j <= w; j++)
        {

            for (int k = h; k >= 0; k--)
            {
                int temp = (room * 100) + j;
                map[k][j] = temp;
                room++;

                if (k == 0)
                {
                    room = 1;
                    cnt++;
                    continue;
                }
                cnt++;
                // cout << map[k][j] << ' ';
                if (cnt == order)
                    cout << map[k][j] << '\n';
            }
            // cout << '\n';
        }
    }

    // for (int i = 1; i <= 12; i++)
    // {
    //     for (int j = 6; j >= 0; j--)
    //     {
    //         test[j][i] = i;
    //     }
    // }

    // for (int i = 1; i <= 6; i++)
    // {
    //     for (int j = 1; j <= 12; j++)
    //     {
    //         cout << test[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }

    return 0;
}