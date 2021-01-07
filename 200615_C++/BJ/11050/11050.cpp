#include <iostream>

using namespace std;
int dy[21][21];
int test(int a, int b)
{
    if (dy[a][b] > 0)
    {
        return dy[a][b];
    }

    if (a == b || b == 0)
    {

        return 1;
    }
    else
    {

        return dy[a][b] = test(a - 1, b - 1) + test(a - 1, b);
    }
}

int main()
{
    int a, b;

    cin >> a >> b;

    cout << test(a, b) << endl;

    return 0;
}
