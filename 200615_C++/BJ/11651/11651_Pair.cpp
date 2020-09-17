#include <iostream>
#include <vector>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
    {
        return a.first > b.first;
    }
    else
    {
        return a.second < b.second;
    }
}

int main()
{

    int n, x, y;

    vector<pair<int, int>> v;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }

    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < n; i++)
    {
        cout << v[i].first <<" "<< v[i].second << endl;
    }

    return 0;
}
