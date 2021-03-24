#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > solution(vector<vector<int> > arr1, vector<vector<int> > arr2)
{

    vector<vector<int> > answer;

    for (int i = 0; i < arr1.size(); i++)
    {
        vector<int> v;
        for (int j = 0; j < arr1[0].size(); j++)
        {
            v.push_back(arr1[i][j] + arr2[i][j]);
        }
        answer.push_back(v);
    }

    for (int i = 0; i < arr1.size(); i++)
    {
        for (int j = 0; j < arr1[i].size(); j++)
        {
            cout << answer[i][j];
        }
        cout << endl;
    }

    return answer;
}

int main(int argc, char const *argv[])
{
    vector<vector<int> > arr1;
    vector<vector<int> > arr2;
    int n = 2, m;
    vector<int> element(n);
    arr1.push_back(element);
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     vector<int> element(n);
    //     arr1.push_back((element));
    // }
    // vector<vector<int> > arr2(2);
    // vector<int> v2;
    // arr2.push_back(v2);
    arr1[0].push_back(3);
    arr1[0].push_back(4);
    arr1[1].push_back(5);
    arr1[1].push_back(6);

    for (int i = 0; i < arr1.size(); i++)
    {
        for (int j = 0; j < arr1[i].size(); j++)
        {
            cout << arr1[i][j];
        }
        cout << endl;
    }

    // cin >> m;
    // for (int i = 0; i < m; i++)
    // {
    //     vector<int> element(m);
    //     arr2.push_back((element));
    // }

    solution(arr1, arr2);

    return 0;
}
