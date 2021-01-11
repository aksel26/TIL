#include <iostream>

using namespace std;

int GCD(int a, int b)
{
    return b ? GCD(b, a % b) : a;
}

// int max(int x, int y)
// {
//     while (1)
//     {
//         int r = x % y;
//         if (r == 0)
//             return y;

//         x = y;
//         y = r;
//     }
// }

int main(int argc, char const *argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int a, b;

    cin >> a >> b;

    // int temp = max(a, b);
    int result;

    cout << GCD(a, b) << '\n';
    result = GCD(a, b);
    int minL = a * b / result;
    cout << minL << '\n';

    return 0;
}
