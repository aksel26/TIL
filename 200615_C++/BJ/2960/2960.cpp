#include <iostream>

using namespace std;
int arr[1000];
int main()
{

    int N, K, init = 2, P, result = 0;
    cin >> N >> K;

    for (int i = 2; i <= N; i++)
    {
        arr[i - 2] = i;
    }

    for (int i = 0; i < N - 1; i++)
    {
        if (arr[i] != 0)
        {

            P = arr[i];

            for (int j = i + 1; j < N - 1; j++)
            {

                arr[i] = 0;

                if (arr[j] % P == 0)
                {
                    if (arr[j] == 0)
                    {

                        continue;
                    }

                    arr[j] = 0;
                }
            }
        }
        
        else
        {
            continue;
        }
    }

    cout << result << endl;

    return 0;
}