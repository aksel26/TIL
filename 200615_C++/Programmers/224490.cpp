#include <string>
#include <iostream>
using namespace std;

bool solution2(string s)
{
    bool answer;

    char a[9];

    for (int i = 0; i < s.size(); i++)
    {
        a[i] = s[i];
    }

    if (s.size() >= 4 && s.size() <= 6)
    {

        for (int i = 0; i < s.size(); i++)
        {

            if (a[i] < 48 || a[i] > 57)
            {
                answer = false;
                break;
            }
            else
            {
                answer = true;
            }
        }
    }
    else
    {
        answer = false;
    }

    printf("%d\n", answer);

    return answer;
}
bool solution(string s)
{
    bool answer = true;

    char a[50];

    int y = 0;
    int p = 0;

    for (int i = 0; i < s.size(); i++)
    {
        a[i] = s[i];
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (a[i] == 121)
            y++;
        if (a[i] == 112)
            p++;
    }
    if (p == y)
        answer = true;
    else
        answer = false;

    return answer;
}

int main(int argc, char const *argv[])
{
    string s = "2334";

    // solution(s);
    solution2(s);
    return 0;
}
