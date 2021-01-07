#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, result;

    cin >> n;
    int min = 214700000;
    int temp;

    int cnt = 0;
    while (n > 0)
    {

        if (n % 5 == 0)
        {
            n -= 5;
            cnt++;
        }
        else if (n % 3 == 0)
        {
            n -= 3;
            cnt++;
        }
        else if (n > 5)
        {
            n -= 5;
            cnt++;
        }
        else
        {
            cnt = -1;
            break;
        }
    }
    cout << cnt << endl;
    return 0;
}
