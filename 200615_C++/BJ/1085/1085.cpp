#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int x, y, n, m;

    cin >> x >> y >> n >> m;

    int xlong1, xlong2, ylong1, ylong2;

    int min = 2147000000;
    int xMin, yMin;
    xlong1 = abs(x - n);
    xlong2 = x - 0;
    if (xlong1 > xlong2)
    {
        xMin = xlong2;
    }
    else
    {
        xMin = xlong1;
    }
    ylong1 = abs(y - m);
    ylong2 = y - 0;
    if (ylong1 > ylong2)
    {
        yMin = ylong2;
    }
    else
    {
        yMin = ylong1;
    }

    if (yMin < xMin)
    {
        min = yMin;
    }
    else
    {
        min = xMin;
    }

    cout << min << '\n';

    return 0;
}