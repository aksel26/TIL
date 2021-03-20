#include <bits/stdc++.h>

using namespace std;

vector<long long> solution(int x, int n)
{
    vector<long long> answer;

    for (int i = 1; i <= n; i++)
    {
        int temp = i * x;
        answer.push_back(temp);
    }

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << endl;
    }

    return answer;
}

int main(int argc, char const *argv[])
{
    int n, x;

    cin >> x >> n;

    solution(x, n);
    return 0;
}
