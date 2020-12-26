#include <string>
#include <iostream>
using namespace std;

bool solution2(string s)
{

    if (s.length() != 4 && s.length() != 6)
        return false;

    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] < 48 || s[i] > 57)
        {
            return false;
        }
    }
    return true;
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
    string s = "123456z";

    // solution(s);
    solution2(s);
    return 0;
}
