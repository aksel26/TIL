
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
const int MAX = 1000000;
long long tree[MAX];
int N;
long long M;
bool possible(long long height)
{
    long long len = 0;
    for (int i = 0; i < N; i++)
    {
        if (tree[i] - height > 0)
            len += tree[i] - height;
    }
    if (len >= M)
        return true;
    return false;
}
int main(int argc, char const *argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n, m, num, right = 0;

    cin >> N >> M;
    long long low = 1, high = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> tree[i];

        high = max(high, tree[i]);
    }

    long long result = 0;
    while (low <= high)
    {
        long long mid = (low + high) / 2;
        if (possible(mid))
        {

            result = max(result, mid);
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << result << '\n';

    return 0;
}
