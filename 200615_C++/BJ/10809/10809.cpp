#include <iostream>
#include <string>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    int ch[26];

    for (int i = 0; i < 26; i++)
    {
        ch[i] = -1;
    }

    for (int i = 0; i < s.length(); i++)
    {
        int temp = s[i] - 97;
        if (ch[temp] == -1)
        {

            ch[temp] = i;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        cout << ch[i] << ' ';
    }

    return 0;
}
