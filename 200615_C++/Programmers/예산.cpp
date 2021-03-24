
#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> d, int budget)
{
    vector<int> arr(d);

    sort(arr.begin(), arr.end());

    int answer = 0;

    int sum = 0;

    for (int i = 0; i < d.size(); i++)
    {
        sum += arr[i];
    }
    vector<int>::iterator iter;
    while (sum > budget)
    {
        iter = max_element(arr.begin(), arr.end());

        arr.erase(iter);
        sum -= *iter;
    }
    answer = arr.size();
    cout << answer << endl;
    return answer;
}
int main(int argc, char const *argv[])
{

    int n = 20;
    vector<int> v;

    v.__emplace_back(1);
    v.__emplace_back(3);
    v.__emplace_back(2);
    v.__emplace_back(5);
    v.__emplace_back(4);
    // v.__emplace_back(4);

    solution(v, n);
    return 0;
}
