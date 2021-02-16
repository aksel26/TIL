
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{

    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n, m;

    cin >> n >> m;
    vector<pair<string, string> > v;
    vector<string> pwd;
    vector<string> adr;

    for (int i = 0; i < n; i++)
    {
        string adr, pwd;
        cin >> adr >> pwd;
        v.push_back(make_pair(adr, pwd));
    }

    for (int i = 0; i < m; i++)
    {
        string temp;
        cin >> temp;
        adr.push_back(temp);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < m; i++)
    {
        int left = 0;
        int right = v.size() - 1;
        string tmp = adr[i];
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (tmp == v[mid].first)
            {
                pwd.push_back(v[mid].second);
                break;
            }
            else if (tmp < v[mid].first)
            {
                right = mid - 1;
            }
            else if (tmp > v[mid].first)
            {
                left = mid + 1;
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        cout << pwd[i] << '\n';
    }

    return 0;
}
