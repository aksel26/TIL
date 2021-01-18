#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(int argc, char const *argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n, m;

    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < m; i++)
    {
        int left = 0, right = n - 1;
        int check = b[i];
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (a[mid] == check)
            {
                b[i] = 1;
                break;
            }
            else if (a[mid] > check)
            {
                right = mid - 1;
            }
            else if (a[mid] < check)
            {
                left = mid + 1;
            }
            b[i] = 0;
        }
    }

    for (int i = 0; i < m; i++)
    {
        cout << b[i] << '\n';
    }

    return 0;
}
