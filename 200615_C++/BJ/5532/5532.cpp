#include <iostream>

using namespace std;

int main()
{

    int l, a, b, c, d;
    int cnt = 0;
    cin >> l >> a >> b >> c >> d;

    int totalPage = a + b;
    int totalDay = c + d;

    int pagePerday = totalPage / totalDay;

    cnt += pagePerday;
    int tmp;
    int tmp2;

    if (totalPage % totalDay != 0)
    {
        tmp = totalPage % totalDay;
        cout << tmp << endl;
        if (tmp < c && tmp < d)
        {
            cnt += 1;
        }
        tmp = tmp / d;
        tmp2 = tmp % d;
        cnt += tmp;

        if (tmp % d != 0)
        {
            cnt += 1;
        }
    }

    cout << l - cnt << endl;
    return 0;
}