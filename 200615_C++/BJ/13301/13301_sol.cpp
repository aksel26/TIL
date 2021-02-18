
#include <iostream>

using namespace std;

long long dp1[81];
long long dp2[81];

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;

    cin >> n;

    dp1[1] = 1, dp1[2] = 1;
    for (int i = 3; i <= 80; i++)
    {
        dp1[i] = dp1[i - 1] + dp1[i - 2];
    }

    dp2[1] = 4;

    for (int i = 2; i <= 80; i++)
    {
        dp2[i] = dp2[i - 1] + dp1[i] * 2;
    }

    cout << dp2[n] << '\n';
    return 0;
}