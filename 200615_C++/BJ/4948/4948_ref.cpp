#include <iostream>

using namespace std;
int inputSize;
int arr[300000];
int main()
{

    while (1)
    {

        int result = 0;
        cin >> inputSize;
        int arrLength = inputSize * 2;

        for (int i = 0; i <= arrLength; i++)
        {
            arr[i] = 0;
        }

        if (inputSize == 0)
        {
            break;
        }
        else
        {
            for (int i = 2; i <= 2 * arrLength; i++)
            {
                if (arr[i] == 0)
                {
                    arr[i] = 0;
                }

                for (int j = i + i; j <= arrLength; j += i)
                {
                    if (arr[j] != 1)
                    {
                        arr[j] = 1;
                    }
                }
            }

            for (int i = inputSize + 1; i <= inputSize * 2; i++)
            {
                if (arr[i] == 0)
                {
                    result++;
                }
            }
        }

        cout << result << endl;
    }
}
