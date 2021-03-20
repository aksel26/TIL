
#include <bits/stdc++.h>

using namespace std;

string solution(string s)
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    string answer = "";
    int cnt = 0;

    queue<char> q;
    vector<char> v;
    for (int i = 0; i < s.size(); i++)
    {
        q.push((s[i]));
    }

    while (!q.empty())
    {
        if (q.front() == ' ')
        {
            v.push_back(q.front());
            q.pop();
            cnt = 0;
            continue;
        }
        if (cnt == 0 || cnt % 2 == 0)
        {
            if (q.front() >= 97 && q.front() <= 122)
            {
                v.push_back(q.front() - 32);
                q.pop();
                cnt++;
            }
            else if (q.front() >= 65 && q.front() <= 90)
            {

                v.push_back(q.front());
                q.pop();
                cnt++;
            }
            // v.push_back(q.front() - 32);

            // q.pop();
            // cnt++;
        }
        else if (cnt % 2 != 0)
        {
            if (q.front() >= 97 && q.front() <= 122)
            {

                v.push_back(q.front());
                q.pop();
                cnt++;
            }
            else if (q.front() >= 65 && q.front() <= 90)
            {
                v.push_back(q.front() + 32);
                q.pop();
                cnt++;
            }
            // q.pop();
            // cnt++;
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        answer += v[i];
        // cout << v[i];
    }
    cout << answer << endl;
    return answer;
}

int main(int argc, char const *argv[])
{
    string s = "aaa aAa Aaa";
    solution(s);
    return 0;
}
