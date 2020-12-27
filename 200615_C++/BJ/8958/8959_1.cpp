#include <iostream>
#include <string>

using namespace std;
int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int tcase, score = 0, sum = 0, tmp = 0;

    cin >> tcase;
    string s;
    for (int i = 0; i < tcase; i++)
    {
        cin >> s;
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == 'O')
            {
                tmp++;
                sum = sum + tmp;
            }
            else if (s[j] == 'X')
            {
                tmp = 0;
            }
        }
        cout << sum << '\n';
        sum = 0;
        tmp = 0;
    }

    return 0;
}