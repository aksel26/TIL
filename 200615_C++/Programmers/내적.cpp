#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> a, vector<int> b)
{

    int answer = 0;

    for (int i = 0; i < a.size(); i++)
    {
        answer += a[i] * b[i];
        cout << answer << endl;
    }

    return answer;
}

int main()
{

    vector<int> a;
    a.push_back(-1);
    a.push_back(0);
    a.push_back(1);
    // a.push_back(4);
    // a.__emplace_back(1);
    // a.__emplace_back(2);
    // a.__emplace_back(3);
    // a.__emplace_back(4);

    vector<int> b;

    b.__emplace_back(1);
    b.__emplace_back(0);
    b.__emplace_back(-1);
    // b.__emplace_back(2);

    solution(a, b);

    return 0;
}