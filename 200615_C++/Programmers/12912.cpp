#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b)
{
    long long answer = 0;
    int i, tmp;
    if (a > b)
    {
        tmp = b;
        b = a;
        a = tmp;
    }
    for (i = a; i <= b; i++)
    {
        answer += i;
    }

    return answer;
}

int main()
{

    int a, b;
    a = 5, b = 3;
    solution(a, b);
    return 0;
}