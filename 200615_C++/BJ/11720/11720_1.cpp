#include <iostream>
#include <string>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int sum = 0, num;
    cin >> num;
    string s;
    cin >> s;
    for (int i = 0; i < num; i++)
    {
        sum += s[i] - '0';
    }

    cout << sum << '\n';

    return 0;
}