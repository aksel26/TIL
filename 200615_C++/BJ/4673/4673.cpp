#include <iostream>

using namespace std;

int calc(int num)
{
    int result = num;

    while (num > 0)
    {
        result += num % 10;
        num /= 10;
    }

    return result;
}

int main()
{

    int num;
    int arr[10000];

    for (int i = 1; i <= 10000; i++)
    {
        int result = calc(i);

        if (result <= 10000)
        {
            arr[result] = 1;
        }
    }

    for (int i = 1; i <= 10000; i++)
    {
        if (arr[i] != 1)
            cout << i << endl;
        }

    return 0;
}
