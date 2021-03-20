#include <bits/stdc++.h>

using namespace std;

long long solution(long long n)
{
    long long answer = 0;
    long long temp = sqrt(n);
    double temp2 = sqrt(n);

    if (temp2 - temp == 0)
    {
        answer = (temp + 1) * (temp + 1);
    }
    else
    {
        answer = -1;
    }

    return answer;
}

int main(int argc, char const *argv[])
{
    long long n = 10;
    solution(n);
    return 0;
}
