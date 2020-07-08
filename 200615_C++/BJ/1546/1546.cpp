#include <iostream>

using namespace std;

int main()
{
    int size, max = -100000;
    double sum = 0, result;

    cin >> size;
    double arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];

        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] / max * 100;
    }

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    result = sum / (double)size;
    cout << fixed;
    cout.precision(1);
    cout << result << endl;

    return 0;
}