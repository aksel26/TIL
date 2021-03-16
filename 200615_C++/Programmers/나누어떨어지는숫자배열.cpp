#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr, int divisor)
{
    vector<int> answer;
    vector<int>::iterator iter;

    for (iter = arr.begin(); iter != arr.end(); iter++)
    {

        if (*iter % divisor != 0)
        {
            // cout << *iter << endl;
            arr.erase(iter);
            iter--;
        }
    }
    if (arr.empty())
        arr.push_back(-1);
    else
        sort(arr.begin(), arr.end());
    for (iter = arr.begin(); iter != arr.end(); iter++)
    {
        answer.push_back(*iter);
    }

    return answer;
}

int main(int argc, char const *argv[])
{
    vector<int> arr;
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(6);
    // arr.push_back(10);

    vector<int>::iterator iter;

    solution(arr, 10);
    return 0;
}
