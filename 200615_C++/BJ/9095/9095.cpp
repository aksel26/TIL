#include <bits/stdc++.h>

using namespace std;
int dp[11];
int n;

int dp3(void)
{
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for (int i = 4; i <= n; i++)
    {
        dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]);
    }
    return dp[n];
}

int main()
{
    int Tcase;
    cin >> Tcase;

    for (int i = 0; i < Tcase; i++)
    {
        cin >> n;
        cout << dp3() << endl;
    }

    return 0;
}