// Example program
#include <iostream>
#include <string>

using namespace std;

int pivotIndex(int nums[])
{
    int sum = 0;
    for (int i = 0; i < 7; i++)
    {
        sum += nums[i];
    }

    int leftSum = 0;
    int rightSum = sum;
    int pastPivotNum = 0;
    for (int i = 0; i < 7; i++)
    {
        int num = nums[i];
        rightSum = rightSum - num;
        leftSum = leftSum + pastPivotNum;
        if (leftSum == rightSum)
        {
            return i;
        }
        pastPivotNum = num;
    }
    return -1;
}

int main()
{
    int a[] = {1, 8, 2, 9, 2, 3, 6};

    cout << pivotIndex(a) << endl;

    return 0;
}
