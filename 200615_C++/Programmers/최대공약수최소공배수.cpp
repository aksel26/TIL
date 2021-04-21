
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int n, int m)
{
    vector<int> answer;
    int big = 0, small = 0;
    if (n % m == 0 || m % n == 0)
    {
        big = min(n, m);
        small = max(n, m);
    }
    else
    {
        big = 1;
        small = n * m;
    }

    answer.push_back(big);
    answer.push_back(small);
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << ' ';
    }

    return answer;
}

int main()
{

    int n, m;

    n = 3, m = 12;

    solution(n, m);
}