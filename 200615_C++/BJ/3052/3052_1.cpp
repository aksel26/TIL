#include <iostream>

using namespace std;
int ch[1001];
int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    int cnt = 0;

    for (int i = 0; i < 10; i++)
    {
        cin >> n;
        int temp = n % 42;
        if (ch[temp] == 0)
        {

            ch[temp] = -1;
            cnt++;
        }
    }
    cout << cnt << '\n';

    return 0;
}