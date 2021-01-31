
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n, m, num;

    cin >> n >> m;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    int left = 0, right = v.size() - 1;
    int cnt = 0, tree;
    while (left <= right)
    {
        int mid = (left + right) / 2;

        int temp = v[mid];
        cnt = 0;

        for (int i = mid; i <= right; i++)
        {
            if (v[i] >= temp)
            {
                tree = v[i] - temp;
            }
            cnt += tree;
            cout << cnt << endl;
            if (m == cnt)
            {
                cout << temp << endl;
                return 0;
            }
        }
        left = mid + 1;
    }

    return 0;
}
