#include <iostream>

using namespace std;

int main()
{

    int num, tcase, sum = 0;
    cin >> tcase;

    for (int i = 0; i < tcase; i++)
    {
        cin >> num;
        if (num == 1)
        {
            sum++;
        }
        else
        {
            sum--;
        }
    }

    if (sum < 0)
    {
        cout << "Junhee is not cute!" << endl;
    }
    else
    {
        cout << "Junhee is cute!" << endl;
    }

    return 0;
}