
#include <bits/stdc++.h>

using namespace std;

int solution(int n)
{
    cin.tie(NULL);

    ios_base::sync_with_stdio(false);
    int answer = 0;
    vector<int> v;

    while (1)
    {
        v.push_back(n % 3);
        n = n / 3;
        if (n <= 3)
        {
            v.push_back(n);
            break;
        }
    }
    int idx = v.size() - 1;

    for (int i = 0; i < v.size(); i++)
    {
        int temp = v[i] * pow(3, idx--);

        answer += temp;
    }

    cout << answer << endl;

    return answer;
}

int main()
{
    int n = 125;

    solution(n);
}