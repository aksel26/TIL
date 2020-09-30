
#include <iostream>

using namespace std;
int arr[101];
int main()
{
    int n, max = -100, min = 100, result = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        else if (min > arr[i])
        {
            min = arr[i];
        }
    }
    result = max - min;
    cout << result << endl;

    return 0;
}


// 입력
// 10
// 13 15 34 23 45 65 33 11 25 42

// 출력
// 54