#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int tcase, num;
    string clothes, cate;

    cin >> tcase;

    while (tcase--)
    {
        map<string, int> m;

        cin >> num;

        while (num--)
        {

            cin >> clothes >> cate;

            if (m.find(cate) == m.end())
            {
                m.insert(pair<string, int>(cate, 1));
            }
            else
            {
                m[cate]++;
            }
        }
        int ans = 1;
        for (auto i : m)
        {
            ans *= (i.second + 1);
        }
        ans -= 1;
        cout << ans << '\n';
    }
    return 0;
}
