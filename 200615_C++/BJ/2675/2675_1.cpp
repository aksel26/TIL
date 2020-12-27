#include <iostream>
#include <string>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int tcase, num;
    string s;

    cin >> tcase;

    for (int i = 0; i < tcase; i++)
    {
        cin >> num;
        cin >> s;
        for (int j = 0; j < s.length(); j++)
        {
            for (int k = 0; k < num; k++)
            {
                cout << s[j];
            }
        }
        cout << '\n';
    }

    return 0;
}