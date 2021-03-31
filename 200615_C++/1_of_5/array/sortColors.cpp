#include <bits/stdc++.h>

using namespace std;
void sortColors(int nums[])
{
    int idx = 0;
    int idx2 = nums.length - 1;
    int i = 0;
    while (i <= idx2)
    {
        if (nums[i] == 0)
        {
            swap(nums[i], nums[idx]);
            idx++;
            i++;
        }
        else if (nums[i] == 2)
        {
            swap(nums[i], nums[idx2]);
            idx2--;
        }
        else
        {
            i++;
        }
    }
}