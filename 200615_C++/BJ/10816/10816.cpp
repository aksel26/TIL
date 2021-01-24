#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{

    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n, m, aNum, bNum;
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
        int cnt = 0;
        int temp = b[i];

        int left = 0;
        int right = a.size() - 1;

        while (left <= right)
        {
            int mid = (left + right) / 2;

            if (a[mid] == temp)
            {

                cnt++;
                if (a[mid + 1] != temp)
                {
                    right = mid - 1;
                    continue;
                }
                else
                {
                    left = mid + 1;
                    continue;
                }
            }
            else if (a[mid] < temp)
            {
                left = mid + 1;
            }
            else if (a[mid] > temp)
            {
                right = mid - 1;
            }
        }
        b[i] = cnt;
    }

    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << ' ';
    }

    return 0;
}
