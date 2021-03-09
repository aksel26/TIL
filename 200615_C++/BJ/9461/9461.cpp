#include <bits/stdc++.h>

using namespace std;
long long arr[101];
int main(int argc, char const *argv[])
{
    int tcase, n;

    cin >> tcase;

    for (int i = 0; i < tcase; i++)
    {
        cin >> n;

        arr[1] = 1;
        arr[2] = 1;
        arr[3] = 1;

        for (int i = 4; i <= n; i++)
        {
            arr[i] = arr[i - 2] + arr[i - 3];
        }
        cout << arr[n] << endl;
    }

    return 0;
}
