#include <bits/stdc++.h>

using namespace std;
int arr[129][129];
int white, blue;

void solve(int y, int x, int size)
{

    int check = arr[y][x];

    for (int i = y; i < y + size; i++)
    {
        for (int j = x; j < x + size; j++)
        {
            if (check == 0 && arr[i][j] == 1)
            {
                check = 2;
            }
            else if (check == 1 && arr[i][j] == 0)
            {
                check = 2;
            }

            if (check == 2)
            {
                solve(y, x, size / 2);
                solve(y, x + size / 2, size / 2);
                solve(y + size / 2, x, size / 2);
                solve(y + size / 2, x + size / 2, size / 2);
                return;
            }
        }
    }

    check == 0 ? white++ : blue++;
}

int main(int argc, char const *argv[])
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    solve(0, 0, n);

    cout << white << endl;
    cout << blue << endl;

    return 0;
}
