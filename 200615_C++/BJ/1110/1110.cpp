#include <iostream>

using namespace std;

int main()
{

    int num, f, r, temp, result = 0, cnt = 0;

    cin >> num;

    if (num < 10)
    {
        num *= 10;
    }

    result = num;

    while (true)
    {
        f = result / 10;
        r = result % 10;
        temp = f + r;

        result = (r * 10) + (temp % 10);
        cnt++;

        if (num == result)
        {
            break;
        }
    }

    cout << cnt << endl;

    return 0;
}