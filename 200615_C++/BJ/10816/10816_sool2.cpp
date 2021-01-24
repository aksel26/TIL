#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{

    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n, m, aNum, bNum, target;
    cin >> n;
    vector<int> a;

    vector<int>::iterator lower;
    vector<int>::iterator upper;
    for (int i = 0; i < n; i++)
    {
        cin >> aNum;
        a.push_back(aNum);
    }
    sort(a.begin(), a.end());
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> target;
        upper = upper_bound(a.begin(), a.end(), target);
        lower = lower_bound(a.begin(), a.end(), target);

        cout << upper - lower << ' ';
    }

    cout << '\n';
    return 0;
}
