
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    long long m, num;

    cin >> n >> m;
    vector<long long> v;
    long long top = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (num > top)
        {
            top = num;
        }
        v.push_back(num);
    }
    long long bottom = 1;
    long long tree = 0;
    while (bottom <= top)
    {
        long long mid = (bottom + top) / 2;

        long long length = 0;

        for (int i = 0; i < v.size(); i++)
        {
            long long temp = v[i] - mid;
            if (temp > 0)
                length += temp;
        }

        if (length >= m)
        {
            tree = max(tree, mid);
            bottom = mid + 1;
        }
        else if (length < m)
        {
            top = mid - 1;
        }
    }

    cout << tree << endl;

    return 0;
}
