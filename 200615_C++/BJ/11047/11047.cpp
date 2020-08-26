#include <iostream>

using namespace std;

int main()
{
    //동전 종류, 합
    int N, K;

    int result = 0;

    cin >> N >> K;

    int arr[11];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i <= N; i++)
    {
        result += K / arr[N - i];
        K = K % arr[N - i];
        if (K == 0)
            break;
    }

    cout << result << endl;

    return 0;
}