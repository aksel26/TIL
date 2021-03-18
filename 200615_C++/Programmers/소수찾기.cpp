#include <bits/stdc++.h>

using namespace std;

int solution(int n)
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    long long answer = 0;
    vector<long long> v;

    for (long long i = 1; i <= n; i++)
    {
        v.push_back(i);
    }

    for (long long i = 2; i <= n; i++)
    {
        for (long long j = i * i; j <= n; j += i)
        {
            v[j] = -1;
        }
    }
    v[1] = -1;
    for (long long i = 1; i <= n; i++)
    {
        if (v[i] != -1)
            answer++;
    }

    return answer;
}
int main(int argc, char const *argv[])
{
    int n = 5;
    solution(n);
    return 0;
}
