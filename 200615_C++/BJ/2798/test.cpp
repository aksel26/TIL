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
        for (int j = 1; j <= card - 2; j++)
        {
            for (int k = 2; k <= card - 1; k++)
            {
                if (j == k)
                    continue;
                sum = arr[i] + arr[j] + arr[k];
                // cout << "arr[i]: " << arr[i] << "  arr[j]: " << arr[j] << " arr[k]: " << arr[k] << endl;
                // cout<<sum<<endl;

                // if(sum<=limit){
                //     // cout<<max<<endl;
                //     if(sum>max){

                //     max = sum;
                //     }
                // }
                if (sum <= limit)
                {
                    cout<<max<<endl;
                    if (sum > max)
                    {
                        max = sum;

                        // cout << max << endl;
                    }
                }
                //     if (max <= limit)
                //     {
                //         result = max;

                //         cout<<result<<endl;
                //     }
                // }

                // cout<<max<<endl;
            }
        }
    }

    cout << max << endl;

    return 0;
}