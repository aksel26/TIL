

#include <bits/stdc++.h>

using namespace std;

string solution(string s, int n)
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(0);
    string answer = "";
    vector<char> v;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 97 && s[i] <= 122)
        {

            if (s[i] + n > 122)
            {
                v.push_back((s[i] - 25) + (n - 1));
            }
            else
            {
                v.push_back(s[i] + n);
            }
        }
        else if (s[i] >= 65 && s[i] <= 90)
        {

            if (s[i] + n > 90)
            {
                v.push_back((s[i] - 25) + (n - 1));
            }
            else
            {
                v.push_back(s[i] + n);
            }
        }
        else if (s[i] == ' ')
        {
            v.push_back(s[i]);
        }
    }

    for (int i = 0; i < s.size(); i++)
    {
        answer += v[i];
    }

    return answer;
}

int main(int argc, char const *argv[])
{
    // string s = "a B z";
    string s = "z";
    int n = 1;

    solution(s, n);

    return 0;
}
