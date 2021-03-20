#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

long long solution(long long n)
{
    long long answer = 0;
    string temp = to_string(n);

    sort(temp.begin(), temp.end(), greater<int>());
    answer = stoll(temp);

    // vector<int> v;
    // for (int i = 0; i < temp.size(); i++)
    // {
    //     v.push_back(temp[i] - '0');
    // }

    // sort(v.begin(), v.end(), greater<int>());
    // string kk = "";
    // for (int i = 0; i < v.size(); i++)
    // {
    //     kk += to_string(v[i]);
    // }
    // answer = stol(kk);

    cout << answer << endl;
    return answer;
}

int main(int argc, char const *argv[])
{
    int n = 118372;
    solution(n);

    return 0;
}
