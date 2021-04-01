#include <bits/stdc++.h>

using namespace std;

int findPeakElem(vector<int> nums)
{
    int left = 0;
    int right = nums.size() - 1;

    if (nums.size() <= 1)
    {
        return 0;
    }

    while (left < right)
    {
        int pivot = (left + right) / 2;
        int num = nums[pivot];
        int nextNum = nums[pivot + 1];
        if (num < nextNum)
        {
            left = pivot + 1;
        }
        else
        {
            right = pivot;
        }
    }
    // return right;

    return left;
}
int main(int argc, char const *argv[])
{
    vector<int> v;
    v.__emplace_back(1);
    v.__emplace_back(3);
    v.__emplace_back(2);
    v.__emplace_back(4);
    v.__emplace_back(5);
    v.__emplace_back(7);
    v.__emplace_back(6);

    cout << findPeakElem(v) << endl;
    return 0;
}
