#include <iostream>

using namespace std;
int total()

{
    int nums, size, sum = 0;

    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    return sum;
}
int main()
{
    total();
    return 0;
}
