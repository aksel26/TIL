#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{

    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n, x, y, rank = 1;

    cin >> n;
    pair<int, int> p;
    vector<pair<int, int>> v;
    int ch[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            if (v[i].first < v[j].first && v[i].second < v[j].second)
            {
                rank++;
            }
        }

        ch[i] = rank;
        rank = 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << ch[i] << endl;
    }

    return 0;
}
