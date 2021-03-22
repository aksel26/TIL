#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(long long n)
{
    vector<int> answer;
    string str;
    str = to_string(n);

    int idx = str.size();
    while (idx--)
    {
        answer.push_back(str[idx] - '0');
    }

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << endl;
    }

    return answer;
}

int main(int argc, char const *argv[])
{
    int n = 12345;

    solution(n);
    return 0;
}
