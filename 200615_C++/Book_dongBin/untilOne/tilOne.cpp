#include <iostream>

using namespace std;

int main()
{

    int n, k, cnt = 0, temp;

    cin >> n >> k;

    while (n != 1)
    {
        if (n % k == 0)
        {
            n = n / k;
            cnt++;
        }
        else
        {
            n = n - 1;
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}