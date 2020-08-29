#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num)
{
    int cnt = 0;
    int answer = 0;
    while (1)
    {
        if (num % 2 == 0)
        {
            num = num / 2;
        }
        else if (num % 2 == 1)
        {
            num = num * 3 + 1;
        }

        cnt++;

        if (num == 1)
        {

            return cnt;
            break;
        }

        if (cnt > 500)
        {

            return -1;
        }
    }

    return answer;
}

int main()
{

    solution(626331);

    return 0;
}