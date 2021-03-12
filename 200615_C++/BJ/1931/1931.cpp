#include <bits/stdc++.h>

using namespace std;

bool comp(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    else
    {
        return a.second < b.second;
    }
}

int main()
{

    int n, start, end, max = -100;

    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {

        cin >> start >> end;

        v.push_back(make_pair(start, end));
    }

    sort(v.begin(), v.end(), comp);

    int cnt = 1;
    int temp = v[0].second;
    for (int i = 1; i < n; i++)
    {

        if (temp <= v[i].first)
        {
            // cout<<"j : "<<j<<' ';
            cnt++;
            temp = v[i].second;
        }
    }

    cout << cnt << endl;

    return 0;
}