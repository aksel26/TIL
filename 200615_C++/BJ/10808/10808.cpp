#include <iostream>
#include <string>

using namespace std;
int alphabet[26];
int main()
{

    string str;

    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        alphabet[str[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << alphabet[i] << ' ';
    }

    return 0;
}