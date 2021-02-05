#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int n, num;
    string str;
    int bit = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> str;

        if (str == "add")
        {
            cin >> num;
            bit |= (1 << num);
        }
        else if (str == "check")
        {
            cin >> num;
            if (bit & (1 << num))
            {
                cout << 1 << '\n';
            }
            else
                cout << 0 << '\n';
        }
        else if (str == "remove")
        {
            cin >> num;
            bit &= ~(1 << num);
        }
        else if (str == "toggle")
        {
            cin >> num;
            bit ^= (1 << num);
        }
        else if (str == "all")
        {
            bit = (1 << 21) - 1;
        }
        else if (str == "empty")
        {
            bit = 0;
        }
    }

    return 0;
}
