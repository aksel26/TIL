#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int ch[10001];
int main(int argc, char const *argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, temp;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> temp;
        ch[temp] += 1;
    }

    for (int i = 1; i <= n; i++)
    {
        while (ch[i] != 0)
        {
            cout << i << '\n';
            ch[i]--;
        }
    }

    return 0;
}
