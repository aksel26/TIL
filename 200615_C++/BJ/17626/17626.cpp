#include <bits/stdc++.h>

using namespace std;
int arr[50001];
int main(int argc, char const *argv[])
{
    int n, mul = 1;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        // 제곱수들은 무조건 한개
        int temp = (int)sqrt(i);
        if (sqrt(i) == temp)
        {
            arr[i]++;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << ' ';
    }

    return 0;
}
