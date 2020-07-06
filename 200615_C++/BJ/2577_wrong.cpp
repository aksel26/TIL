#include <iostream>
using namespace std;
// 배열 초기화하는 방법1
int arr[10];
int main()
{
    int A, B, C, tmp, res = 0, div = 100000000, div2 = 10000000;

    cin >> A >> B >> C;

    tmp = A * B * C;

    cout << tmp << endl;

    for (int i = 10; i > 0; i--)
    {
        if (i == 10)
        {

            res = tmp / div;
            if (res == 0)
                continue;
            cout << "i==10일때" << res << endl;
            arr[res]++;
        }
        else if (i < 10)
        {

            res = tmp % div / div2;

            cout << "i = " << i << ", res = " << res << endl;
            // cout << "i<10일때" << res << endl;
            arr[res]++;
            div = div / 10;
            div2 = div2 / 10;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }

        return 0;
}