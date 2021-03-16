
#include <bits/stdc++.h>
using namespace std;

string solution(string s)
{
    // vector<int> v;
    string answer = "";
    // int length = s.size();

    // for (int i = 0; i < length; i++)
    // {
    //     v.push_back(s[i]);
    // }

    // sort(v.begin(), v.end(), greater<int>());
    // for (int i = 0; i < length; i++)
    // {
    //     answer += v[i];
    // }
    // cout << answer << endl;

    sort(s.begin(), s.end(), greater<char>());

    for (int i = 0; i < s.size(); i++)
    {

        cout << s[i] << endl;
    }

    return answer;
}

int main()
{
    string s = "Zbcdefg";

    solution(s);
}
