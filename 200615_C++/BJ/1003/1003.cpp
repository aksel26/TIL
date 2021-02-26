#include <bits/stdc++.h>

using namespace std;
int zero, one;
int dfs(int x)
{
    if (x == 0)
    {
        zero++;
        return 0;
    }
    else if (x == 1)
    {

        one++;
        return 1;
    }
    else
    {
        return dfs(x - 2) + dfs(x - 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, num;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        dfs(num);
        cout << zero << ' '
             << one << '\n';

        zero = 0, one = 0;
    }
}