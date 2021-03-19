#include <bits/stdc++.h>

using namespace std;
int N;
bool compare(string a, string b)
{

    if (a[N] != b[N])
    {
        return a[N] < b[N]; //N인덱스의 문자로 정렬
    }
    else
        return a < b; //사전순으로 정렬
};

vector<string> solution(vector<string> strings, int n)
{
    vector<string> answer(strings);
    N = n;
    char temp;

    // for (int i = 0; i < strings.size(); i++)
    // {
    //     chars.push_back(make_pair(strings[i], strings[i][n]));
    // }

    sort(answer.begin(), answer.end(), compare);

        return answer;
}

int main()
{

    vector<string> arr;

    arr.push_back("abce");
    arr.push_back("abcd");
    arr.push_back("cdx");
    // arr.push_back("car");
    // arr.push_back("sun");
    // arr.push_back("bed");

    solution(arr, 2);
}