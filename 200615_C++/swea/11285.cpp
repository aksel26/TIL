#include <iostream>
#include <algorithm>

using namespace std;

// int boundary[10] = {20, 40, 60, 80, 100, 120, 140, 160, 180, 200};

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int tcase, dart, x, y;

    float quot, length;
    int i_quot;
    cin >> tcase;
    for (int i = 1; i <= tcase; i++)
    {
        int score = 0;
        cin >> dart;

        for (int j = 0; j < dart; j++)
        {
            cin >> x >> y;

            length = sqrt((float)(x * x) + (float)(y * y));
            if (length > 200)
                continue;
            quot = length / 20;        //실수
            i_quot = (int)length / 20; // 정수

            if (i_quot - quot == 0)
            {
                if (quot == 0)
                {
                    score += 10;
                    continue;
                }
                score += 11 - quot;
            }
            else
            {
                score += 10 - quot;
            }
            // for (int k = 0; k < 10; k++)
            // {
            //     if (length > boundary[k])
            //         continue;

            //     score += ((20 * 11) - (length)) / 20;
            //     break;
            // }
        }
        cout << "#" << i << " " << score << endl;
    }

    return 0;
}