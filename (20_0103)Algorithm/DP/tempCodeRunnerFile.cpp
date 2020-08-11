#include <iostream>
#include <algorithm>

using namespace std;

int dp[1010];
int p[1010];

int number;

void Solution()
{
    dp[1] = p[1] ;
    for (int i = 2; i <= number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            dp[i] = max(dp[i], dp[i - j] + p[j]);
        }
    }

    for (int i = 1; i <= number; i++)
    {
        cout<<dp[i]<<endl;
    }
    
    cout << dp[number] << endl;
}

int main(void)
{
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        cin >> p[i];
    }

    Solution();

    return 0;
}
