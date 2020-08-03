#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(pair<string, pair<int, int>> a,
             pair<string, pair<int, int>> b)
{
    if (a.second.first == b.second.first)
    {
        return a.second.second > b.second.second;
    }
    else
    {
        return a.second.first > b.second.first;
    }
}

int main()
{

    vector<pair<string, pair<int, int>>> v;

    v.push_back(pair<string, pair<int, int>>("박명수", make_pair(98, 19920912)));
    v.push_back(pair<string, pair<int, int>>("유재석", make_pair(97, 19960913)));
    v.push_back(pair<string, pair<int, int>>("하하", make_pair(95, 19930203)));
    v.push_back(pair<string, pair<int, int>>("정형돈", make_pair(90, 19921207)));
    v.push_back(pair<string, pair<int, int>>("노홍철", make_pair(88, 19900302)));

    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << ' ';
    }

    return 0;
}