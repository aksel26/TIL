#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, cnt = 2;
    int start = 1;
    int gap = 6;
    int limit = 1;
    cin >> n;

    while (1)
    {
        int boundary = (start * gap) + limit;
        if (boundary < n)
        {
            cnt++;
            start++;
            limit = boundary;
        }
        else if (boundary >= n)
        {
            if (n == 1)
                cnt = 1;
            cout << cnt << '\n';
            break;
        }
    }

    return 0;
}
