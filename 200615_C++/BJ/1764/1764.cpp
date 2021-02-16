#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n, m, cnt = 0;
    string str;
    cin >> n >> m;
    vector<string> strL;
    vector<string> strS;
    vector<string> strAns;

    for (int i = 0; i < n; i++)
    {
        cin >> str;
        strL.push_back(str);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> str;
        strS.push_back(str);
    }

    sort(strL.begin(), strL.end());

    for (int i = 0; i < m; i++)
    {
        int right = strL.size() - 1;
        int left = 0;
        string temp = strS[i];

        while (left <= right)
        {
            int mid = (right + left) / 2;
            if (strL[mid] == temp)
            {
                strAns.push_back(temp);
                cnt++;
                break;
            }
            else if (strL[mid] > temp)
            {
                right = mid - 1;
            }
            else if (strL[mid] < temp)
            {
                left = mid + 1;
            }
        }
    }

    cout << cnt << '\n';
    sort(strAns.begin(), strAns.end());
    for (int i = 0; i < strAns.size(); i++)
    {
        cout << strAns[i] << '\n';
    }

    return 0;
}