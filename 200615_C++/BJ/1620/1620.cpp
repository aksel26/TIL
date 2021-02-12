#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;
int num, low, high;
string temp;
int main(int argc, char const *argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    vector<pair<string, int> > v;
    vector<string> v1;
    for (int i = 1; i <= n; i++)
    {
        string pokemon;
        cin >> pokemon;
        v1.push_back(pokemon);
        v.push_back(make_pair(pokemon, i));
    }

    sort(v.begin(), v.end());

    for (int i = 1; i <= m; i++)
    {

        cin >> temp;

        if (temp[0] >= '0' && temp[0] <= '9')
        {
            std::stringstream ssInt(temp);
            ssInt >> num;
            // num = stoi(temp);
            cout << v1[num - 1] << '\n';
        }
        else
        {
            low = 0;
            high = n - 1;
            while (low <= high)
            {

                int mid = (low + high) / 2;

                if (v[mid].first == temp)
                {
                    cout << v[mid].second << '\n';
                    break;
                }
                else if (v[mid].first < temp)
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
        }
    }
    return 0;
}
