#include <iostream>

using namespace std;

int main()
{

    while (1)
    {
        int tmp, result = 0;
        int inputSize, arrLength;

        cin >> inputSize;

        if (inputSize == 0)
        {
            break;
        }
        else
        {

            arrLength = inputSize * 2;

            int arr[arrLength];

            // 배열 초기화
            for (int i = 0; i < arrLength; i++)
            {
                arr[i] = 0;
            }

            for (int i = inputSize + 1; i <= arrLength; i++)
            {

                //소수 판별
                for (int j = 1; j <= arrLength; j++)
                {
                    tmp = i % j;
                    if (j == 1)
                    {
                        continue;
                    }
                    else if (tmp == 0 && i != j)
                    {
                        break;
                    }
                    else if (tmp == 0 && i == j)
                    {
                        arr[i - 1]++;
                    }
                }
            }

            int result = 0;
            for (int i = arrLength / 2; i < arrLength; i++)
            {

                if (arr[i] != 0)
                {
                    result++;
                }
            }
            cout << result << endl;
        }
    }

    // cout << sosu << endl;

    // while (input!=0)
    // {

    // }

    return 0;
}