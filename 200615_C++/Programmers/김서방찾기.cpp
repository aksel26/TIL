#include <bits/stdc++.h>

using namespace std;

string solution(vector<string> seoul)
{
    // cout << seoul.size() << endl;
    string answer = "";
    string temp = "";

    // for (int i = 0; i < seoul.size(); i++)
    // {
    //     if (seoul[i] == "Kim")
    //     {
    //         temp = to_string(i);
    //         break;
    //     }
    // }

    // answer = "김서방은 " + temp + "에 있다.";
    // cout << answer << endl;
    vector<string>::iterator iter = seoul.end();
    cout << *iter << endl;
    iter = find(seoul.begin(), seoul.end(), "Kim");

    // -seoul.begin();
    cout << *iter << endl;
    return answer;
}

int main()
{

    vector<string> s;

    s.push_back("Jane");
    s.push_back("Kim");
    // vector<int>::iterator iter = s.begin();
    solution(s);
}
