#include <iostream>

using namespace std;

int main()
{
    int num1, num2, result = 0;
    char multi;

    cin >> num1 >> multi >> num2;

    if (num1 % 10 != 0 && num2 % 10 != 0)
    {
        cout << "wrong input" << endl;
        return -1;
    }
    else
    {
        if (multi == '*')
        {
            result = num1 * num2;
        }
        else if (multi == '+')
        {
            result = num1 + num2;
        }
    }

    cout << result << endl;

    return 0;
}