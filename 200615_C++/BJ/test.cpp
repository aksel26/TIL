#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    string s, p;

    p = "101";
    s = "10100010101101100";

    int cnt = 0;
    int temp = 0;

    while (temp != -1)
    {

        temp = s.find(p);

        for (int i = temp; i < temp + p.size(); i++)
        {
            s.erase(s.at(i));
        }
    }

    // for (int i = 0; i < s.size(); i++)
    // {
    //     if (s[i] != 'x')
    //     {
    //         cnt++;

    //         if (cnt == s.size())
    //             cnt = -1;
    //     }
    // }

    cout << cnt << '\n';

    return 0;
}
