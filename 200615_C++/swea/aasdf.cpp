#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int boundary[10] = {20, 40, 60, 80, 100, 120, 140, 160, 180, 200};

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int tcase, dart, x, y, score = 0;
    cin >> tcase;
    for (int i = 1; i <= tcase; i++)
    {
        cin >> dart;

        for (int j = 0; j < dart; j++)
        {
            cin >> x >> y;
            if (x > 200 || y > 200)
            {

                continue;
            }

            float length = sqrt(((x * x) + (y * y)));
            if (length <= 20)
            {
                score += 10;
                continue;
            }

            score += ((20 * 11) - (length)) / 20;
        }
        cout << "#" << i << " " << score << '\n';
    }

    return 0;
}