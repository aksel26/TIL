#include <iostream>
#include <string>

using namespace std;

int main()
{

    string s1, s2, s3, s4, s5;

    cin >> s1 >> s2 >> s3 >> s4 >> s5;

    for (int i = 0; i < 15; i++)
    {
        if (s1.size() >= i + 1)
        {
            cout << s1[i];
        }
        if (s2.size() >= i + 1)
        {
            cout << s2[i];
        }
        if (s3.size() >= i + 1)
        {
            cout << s3[i];
        }
        if (s4.size() >= i + 1)
        {
            cout << s4[i];
        }
        if (s5.size() >= i + 1)
        {
            cout << s5[i];
        }
    }

    return 0;
}