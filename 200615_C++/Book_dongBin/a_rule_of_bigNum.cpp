#include <iostream>
#include <algorithm>

using namespace std;
int n, m, k, sum, idx, cnt;

// bool compare(int i, int j ){
//     return j< i;
// }

int main()
{

    cin >> n >> m >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 5, greater<int>());

    while (1)
    {
        if (cnt == m /2 )
        {
            break;
        }
        for (int i = 0; i < k; i++)
        {
            sum += arr[idx];
        }
        idx++;
        sum += arr[idx];
        idx--;
        cnt++;
    }
    cout << sum << ' ';

    return 0;
}
