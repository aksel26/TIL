#include <iostream>

using namespace std;

int map[100][100];
// int test[13][13];
int main()
{

    int tcase;

    cin >> tcase;

    int w, h, order, j, k;
    int room = 1;
    int cnt = 0;

    for (int i = 0; i < tcase; i++)
    {
        cin >> h >> w >> order;

        for (j = 0; j < w; j++)
        {

            for (k = h - 1; k >= 0; k--)
            {
                int temp = (room * 100) + (j + 1);
                map[k][j] = temp;

                if (cnt == order)
                {
                    cout << map[k][j] << '\n';
                    break;
                }
                else
                {
                    cnt++;
                    room++;
                }

                // if (k != 0)
                // {
                //     cnt++;
                // }
            }
            room = 1;
            if (cnt == order)
            {
                break;
            }
        }
        cnt = 1;
        room = 1;
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