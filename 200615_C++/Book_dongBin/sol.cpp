#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, m, k, cnt;
vector<int> vec;

int main()
{

    cin >> n >> m >> k;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }

    sort(vec.begin(), vec.end());

    int first = vec[n - 1];
    int second = vec[n - 2];

// 수열을 생각하자.
    int cnt = (m / (k + 1)) * k;

// 딱 떨어지지 않는 수열 갯수. 나머지 요소 갯수
    cnt += m % (k + 1);

    int result = 0;
    result += cnt * first;
    result += (m - cnt) * second;

    cout << result << '\n';

    return 0;
}