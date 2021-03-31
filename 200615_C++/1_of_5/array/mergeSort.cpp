#include <bits/stdc++.h>

using namespace std;
void merge(int nums1[], int m, int nums2[], int n)
{
    int num1Idx = m - 1;
    int num2Idx = n - 1;
    int wIdx = nums1.length - 1;

    if (num2Idx < 0)
    {
        return;
    }
    while (0 <= num1Idx && 0 <= num2Idx)
    {
        int num1 = nums1[num1Idx];
        int num2 = nums2[num2Idx];
        if (num2 <= num1)
        {
            int num = num1;
            nums1[wIdx] = num;
            num1Idx--;
            wIdx--;
        }
        else
        {
            int num = num2;
            nums1[wIdx] = num;
            num2Idx--;
            wIdx--;
        }
    }
    while (0 <= num2Idx)
    {
        nums1[wIdx] = nums2[num2Idx];
        num2Idx--;
        wIdx--;
    }
}