#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b)
{
    return a.first < b.first;
}

int main()
{

    int n, age;
    string name;
    cin >> n;

    vector<pair<int, string>> v;

    for (int i = 0; i < n; i++)
    {
        cin >> age >> name;
        v.push_back(make_pair(age, name));
    }

    stable_sort(v.begin(), v.end(), compare);

    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second << '\n';
    }

    return 0;
}
