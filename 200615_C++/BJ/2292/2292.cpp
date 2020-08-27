#include <iostream>

using namespace std;

int main()
{

    int n, range = 1,cnt = 1;

    cin >> n;
    int tmp = 1;

    while (1)
    {
        if (range >= n)
        {
            break;
        }

        tmp = 6 * (cnt++);
        range += tmp;
    }

    cout<<cnt<<endl;

    return 0;
}
