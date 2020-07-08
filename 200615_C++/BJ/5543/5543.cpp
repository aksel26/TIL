#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int bPrice1, bPrice2, bPrice3, minB = 0, minD = 0, drinks1, drinks2, total = 0;

    cin >> bPrice1 >> bPrice2 >> bPrice3;

    bPrice1 < bPrice2 ? minB = bPrice1 : minB = bPrice2;
    bPrice3 < minB ? minB = bPrice3 : minB = minB;

    cin >> drinks1 >> drinks2;

    drinks1 < drinks2 ? minD = drinks1 : minD = drinks2;

    total = minD + minB - 50;

    cout << total << endl;

    return 0;
}
