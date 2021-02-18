#include <iostream>

using namespace std;
int a[46], b[46];

int aSum(int x)
{
    a[0] = 0;
    a[1] = 1;
    if (x == 1)
        return 0;

    for (int i = 2; i < x; i++)
    {
        a[i] = a[i - 2] + a[i - 1];
    }

    int res = a[x - 1];

    return res;
}
int bSum(int x)
{
    b[0] = 1;
    b[1] = 1;
    if (x == 1)
        return 1;

    for (int i = 2; i < x; i++)
    {
        b[i] = b[i - 2] + b[i - 1];
    }

    int res = b[x - 1];

    return res;
}
int main(int argc, char const *argv[])
{
    int n;
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> n;

    cout << aSum(n) << ' ' << bSum(n) << endl;

    return 0;
}
