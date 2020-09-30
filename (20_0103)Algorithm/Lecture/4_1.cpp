
#include <iostream>
#include <algorithm>

using namespace std;
int arr[101];
int main()
{
    int n, result = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    result = arr[n - 1] - arr[0];
    cout << result << endl;

    return 0;
}


// 입력
// 10
// 13 15 34 23 45 65 33 11 25 42

// 출력
// 54