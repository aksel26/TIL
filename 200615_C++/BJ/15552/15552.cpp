#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, a, b;
    cin >> n;

    while (n != 0)
    {
        cin >> a >> b;
        cout << a + b << '\n';
        n--;
    }

    return 0;
}