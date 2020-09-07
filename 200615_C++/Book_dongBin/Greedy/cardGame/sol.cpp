#include <iostream>
#include <algorithm>

using namespace std;

int result;
int n, m;
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int minVal = 10001;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;

            minVal = min(minVal, x);
        }
        result = max(result, minVal);
    }
    cout << result << endl;
}