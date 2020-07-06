#include <iostream>

using namespace std;

int main()
{
    int size;
    cin >> size;

    int array[size + 1];


    // 수 중 음수도 존재한다.
    int max = -2147483647;

    int min = 2147483647;

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
        if (max < array[i])
        {
            max = array[i];
        }

        if (min > array[i])
        {
            min = array[i];
        }
    }
    cout << min << " " << max << endl;
}