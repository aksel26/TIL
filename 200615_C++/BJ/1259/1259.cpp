#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string s;
    while (1)
    {
        cin >> s;

        int front = 0;
        int back = s.length() - 1;
        if (s == "0")
            return 0;
        for (int i = 0; i <= s.length() / 2; i++)
        {

            if (s[front] == s[back])
            {

                if (i == s.length() / 2)
                {
                    cout << "yes" << '\n';
                    break;
                }
                front++;
                back--;
            }
            else if (s[front] != s[back])
            {
                cout << "no" << '\n';
                break;
            }
        }
    }

    return 0;
}
