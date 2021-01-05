#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cin.tie(NULL);

    ios::sync_with_stdio(false);
    int a[15][15];
    a[0][0] = 1;
    int tcase, k, n, sum = 0, l, temp;

    for (int i = 1; i < 15; i++)
    {
        a[0][i] = i + 1;
        a[i][0] = 1;
    }

    for (int i = 1; i < 15; i++)
    {

        for (int j = 1; j < 15; j++)
        {

            a[i][j] = a[i][j - 1] + a[i - 1][j];
        }
    }

    cin >> tcase;

    for (int i = 0; i < tcase; i++)
    {
        cin >> n >> k;
        cout << a[n][k - 1] << '\n';
    }

    return 0;
}
