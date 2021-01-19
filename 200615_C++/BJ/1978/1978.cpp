#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;
    int cnt = n;
    int num[100] = {
        0,
    };
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
        if (num[i] == 1)
            cnt--;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 2; j <= sqrt(num[i]); j++)
        {
            if (num[i] % j == 0)
            {
                cnt--;
                break;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}