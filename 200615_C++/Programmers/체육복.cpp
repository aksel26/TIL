#include <bits/stdc++.h>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve)
{
    int answer = 0;

    // int size = n - lost.size();
    // cout << size << endl;
    vector<int> v;
    vector<int>::iterator iter = lost.begin();

    for (int i = 1; i <= n; i++)
    {

        if (find(lost.begin(), lost.end(), i) != lost.end())
        {
            continue;
        }
        else
        {
            v.push_back(i);
        }
    }

    for (int i = 0; i < reserve.size(); i++)
    {
        for (int j = 0; j < lost.size(); j++)
        {
            cout << "reserve[i] : " << reserve[i] << endl;
            if (lost[j] == reserve[i])
            {
                cout << "ad" << endl;
                break;
            }
            if (lost[j] + 1 == reserve[i] || lost[j] - 1 == reserve[i])
            {
                v.push_back(reserve[i]);
                break;
            }
        }
    }
    n <= v.size() ? answer = n : answer = v.size();
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }
    cout << "answer: " << answer << endl;
    // answer = size;

    return answer;
}
int main(int argc, char const *argv[])
{
    int n = 3;
    vector<int> lost;
    lost.push_back(1);
    lost.push_back(2);
    // lost.push_back(4);
    // lost.push_back(3);
    vector<int> rsv;
    rsv.push_back(2);
    rsv.push_back(3);
    // rsv.push_back(5);

    solution(n, lost, rsv);

    return 0;
}
