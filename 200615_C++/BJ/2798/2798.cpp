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

        for (int j = i + 1; j < card - 1; j++)
        {

            for (int k = j+1 ; k <= card - 1; k++)
            {
                sum = arr[i] + arr[i + j] + arr[i + j + k-1];
                cout<<"arr[i]: "<< arr[i]<<"  arr[i+j]: "<< arr[i+j]<<" arr[i+j+k]: "<< arr[i+j+k-1]<<endl;
                // cout << i << ", " << j << ", " << k
                //      << " = " << sum << endl;
                if (sum > max)
                {

                    max = sum;
                }
                if (max <= limit)
                {

                    result = max;
                }
            }
        }
    }

    cout << result << endl;

    return 0;
}