#include <bits/stdc++.h>

using namespace std;

string solution(string phone_number)
{
    string answer = "";
    answer = phone_number;
    int index = answer.size() - 4;
    for (int i = 0; i < index; i++)
    {
        answer[i] = '*';
    }

    return answer;
}

int main(int argc, char const *argv[])
{
    string s = "027778888";
    solution(s);
    return 0;
}
