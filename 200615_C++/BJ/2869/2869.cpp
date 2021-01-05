#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, v;

    cin >> a >> b >> v;

    int cnt = 0, height = 0, start = 0;
    int dist = abs(a - b);
    // while (1)
    // {

    //     height = start + dist;
    //     if (height == v)
    //     {
    //         cout << cnt << '\n';
    //         break;
    //     }
    //     else if (height > v)
    //     {
    //         cout << cnt + 1 << '\n';
    //         break;
    //     }
    //     cnt++;
    //     start = height;

    // }
    int answer = 0;
    if ((v - a) % dist != 0)
    {
        answer = ((v - a) / dist) + 1;
    }
    else
    {
        answer = (v - a) / dist;
    }
    cout << answer + 1 << endl;
    return 0;
}
