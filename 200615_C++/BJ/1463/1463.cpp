#include <bits/stdc++.h>

using namespace std;
int d[1000001];
int main(int argc, char const *argv[])
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;

    cin >> n;
    d[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        d[i] = d[i - 1] + 1;
        if (i % 2 == 0)
            d[i] = min(d[i], d[i / 2] + 1);
        if (i % 3 == 0)
            d[i] = min(d[i], d[i / 3] + 1);
    }
    cout << d[n];

    return 0;
}
