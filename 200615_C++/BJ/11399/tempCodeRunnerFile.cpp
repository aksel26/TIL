#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int ppl, time = 0, result = 0;

    cin >> ppl;

    int arr[ppl];

    for (int i = 0; i < ppl; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + ppl);

    for (int i = 0; i < ppl; i++)
    {
        time += arr[i];
        result += time;
    }

    cout << result;

    return 0;
}