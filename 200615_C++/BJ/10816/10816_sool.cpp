#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int lower_binary(vector<int> v, int target, int size)
{
    int mid;
    int left = 0, right = size - 1;
    while (right > left)
    {
        mid = (left + right) / 2;
        if (v[mid] >= target)
            right = mid;
        else
            left = mid + 1;
    }

    return right;
}
int upper_binary(vector<int> v, int target, int size)
{
    int mid;
    int left = 0, right = size - 1;
    while (right > left)
    {
        mid = (left + right) / 2;
        if (v[mid] > target)
            right = mid;
        else
            left = mid + 1;
    }

    return right;
}
int main(int argc, char const *argv[])
{

    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n, m, aNum, bNum, lower, upper;
    cin >> n;
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        cin >> aNum;
        a.push_back(aNum);
    }
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> bNum;
        b.push_back(bNum);
    }
    sort(a.begin(), a.end());

    for (int i = 0; i < b.size(); i++)
    {
        lower = lower_binary(a, b[i], n);
        upper = upper_binary(a, b[i], n);
        if (upper == n - 1 && a[n - 1] == b[i])
            upper++;

        b[i] = upper - lower;
    }

    for (int i = 0; i < m; i++)
    {
        cout << b[i] << '\n';
    }

    return 0;
}
