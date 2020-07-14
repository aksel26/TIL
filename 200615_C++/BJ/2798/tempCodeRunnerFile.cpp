#include <iostream>

using namespace std;
int main()
{

    int card, max = -100000, limit, result;
    cin >> card >> limit;
    int arr[card];
    int num;

    int sum = 0;
    for (int i = 0; i < card; i++)
    {
        /* code */
        cin >> num;
        arr[i] = num;
    }

    for (int i = 0; i <= card - 3; i++)
    {

        for (int j = i + 1; j <= card - 2; j++)
        {

            for (int k = j + 1; k <= card - 1; k++)
            {
                if (sum <= limit)
                {

                    if (sum > max)
                    {
                        max = sum;
                    }
                }
            }
        }
    }

    cout << max << endl;

    return 0;
}