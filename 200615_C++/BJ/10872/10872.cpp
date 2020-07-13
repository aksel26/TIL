#include <iostream>

using namespace std;

int n;
int factorial(int num)
{
    if (num <= 1)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}
int main()
{
    int result;
    int n;
    cin >> n;
    result = factorial(n);
    cout << result << endl;
    return 0;
}