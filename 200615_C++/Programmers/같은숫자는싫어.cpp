
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer(arr);

    answer.erase(unique(answer.begin(), answer.end()), answer.end());

    return answer;
}

int main()
{

    vector<int> v;

    v.push_back(4);
    v.push_back(4);
    v.push_back(4);
    v.push_back(3);
    v.push_back(3);
    // v.push_back(1);
    // v.push_back(1);

    solution(v);
}