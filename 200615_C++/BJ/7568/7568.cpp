#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n;
    cin >> n;
    // int ranker[n];
    // fill_n(ranker, n, 1);
    int rank = 1;

    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        int w, h;
        cin >> w >> h;
        v.push_back(make_pair(w, h));
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            // cout<<"v[i] "<<v[i].first<<" "<<v[i].second<<endl;
            // cout<<"v[j] "<<v[j].first<<" "<<v[j].second<<endl;
            // if (i == j)
            // {
            //     continue;
            // }
            if (v[i].first < v[j].first && v[i].second < v[j].second)
            {

                // ranker[i]++;
                // if (ranker[i] == n)
                // {
                //     ranker[i] = 1;
                // }

                rank++;
            }
        }
        cout << rank << ' ';
        rank = 1;
    }

    // for (int i = 0; i < n; i++)
    // {

    //     cout << ranker[i] << ' ';
    // }

    return 0;
}