#include <iostream>
#include <vector>

using namespace std;
vector<int> v;
int main(int argc, char const *argv[])
{
    long n, k, ans = 0;
    long long maxVal = 0, left = 0, mid = 0, right = 0;
    int nums;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> nums;
        v.push_back(nums);
        if (maxVal < nums)
        {
            maxVal = nums;
        }
    }

    left = 1, right = maxVal;

    while (left <= right)
    {
        int temp = 0;
        mid = (right + left) / 2;
        for (int i = 0; i < v.size(); i++)
        {
            temp += v[i] / mid;
        }

        if (temp < k)
        {
            right = mid - 1;
        }
        else
        {
            if (ans < mid)
                ans = mid;
            left = mid + 1;
        }
    }

    cout << ans << endl;

    return 0;
}