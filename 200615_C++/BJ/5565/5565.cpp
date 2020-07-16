
#include <iostream>

using namespace std;
int main()
{

    int total, price, sum = 0, result = 0;
    int cnt = 0;
    cin >> total;

    while (1)
    {
        cin >> price;
        sum += price;
        cnt++;

        if (cnt == 9)
            break;
    }
    result = total - sum;
    cout << result << endl;

    return 0;
}