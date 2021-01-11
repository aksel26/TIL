#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
int main(int argc, char const *argv[])
{

    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    string s;
    pair<int, string> p;
    vector<pair<int, string> > v;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        p.first = s.length();
        p.second = s;
        v.push_back(make_pair(p.first, p.second));
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].second << endl;
    }

    return 0;
}
