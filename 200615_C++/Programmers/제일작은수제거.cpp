#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr)
{

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    vector<int> answer(arr);

    // answer.size() == 1 ? answer.push_back(-1) : answer.erase(min_element(answer.begin(), answer.end()));

    if (answer.size() == 1)
    {
        answer.clear();
        answer.push_back(-1);
    }
    else
        answer.erase(min_element(answer.begin(), answer.end()));

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << ' ';
    }

    return answer;
}

int main(int argc, char const *argv[])
{
    vector<int> a;
    a.push_back(4);
    // a.push_back(3);
    // a.push_back(2);
    // a.push_back(1);

    solution(a);
    return 0;
}
