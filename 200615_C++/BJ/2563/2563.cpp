#include <iostream>

using namespace std;
const int MAX = 100 + 1;

int arr[MAX][MAX];

int main()
{

    int N;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int x, y;
        cin >> x >> y;

        for (int k = y + 1; k <= y + 10; k++)
        {
            for (int j = x + 1; j <= x + 10; j++)
            {
                arr[k][j] = 1;
            }
        }
    }

    int result = 0;

    for (int i = 1; i < MAX; i++)

    {
        for (int j = 1; j < MAX; j++)
        {
            if (arr[i][j])
                result++;
        }
        /* code */
    }

    cout << result << endl;

    return 0;
}