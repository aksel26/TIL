#include <iostream>

using namespace std;
int arr[1001], n, k, cnt, ans;
int main()
{
    cin >> n >> k;

    
    for (int i = 2; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            if (arr[j] == 0)
            {
                cnt++;
                arr[j] = 1;
            }
            if (cnt == k)
            {
                ans = j;
                break;
            }
        }
        if (cnt == k)
            break;
    }

    cout << ans << '\n';

    return 0;
}