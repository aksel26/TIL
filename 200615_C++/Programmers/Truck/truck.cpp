#include <bits/stdc++.h>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights)
{
    int time = 0;
    int temp = 0;
    queue<int> q;

    for (int i = 0; i < truck_weights.size(); i++)
    {
        temp += truck_weights[i];
        if (temp <= weight)
        {
            q.push(truck_weights[i]);
        }
        else if (temp > weight)
        {
            if (q.size() == 1)
            {

                time += 2;
                temp = 0;
            }
            else
            {
                time++;
                temp -= truck_weights[i];
            }
            q.pop();
        }
    }

    return time;
}

int main()
{

    vector<int> v;
    int num;
    for (int i = 0; i < 4; i++)
    {
        cin >> num;
        v.push_back(num);
    }

    cout << solution(2, 10, v) << endl;

    return 0;
}