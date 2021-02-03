#include <iostream>
#include <cmath>

using namespace std;

int arr[1000001];
int main(int argc, char const *argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n, m, temp;

    cin >> n >> m;
    arr[1] = -1;
    for (int i = 2; i <= m; i++)
    {
        arr[i] = i;
    }

    for (int i = 2; i <= sqrt(m); i++)
    {
        for (int j = i; j <= m; j++)
        {
            temp = i * j;

            if (arr[temp] == -1)
                continue;
            else
                arr[temp] = -1;

            if (temp > m)
                break;
        }
    }

    for (int i = n; i <= m; i++)
    {
        if (arr[i] != -1)
            cout << arr[i] << '\n';
    }

    return 0;
}
