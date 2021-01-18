#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int ch[10][10];
int main(int argc, char const *argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n, a, b;
    cin >> n;
    vector<vector<int> > arr(n, vector<int>(2, 0));
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0];
        cin >> arr[i][1];
    }

    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        cout << arr[i][0] << ' ' << arr[i][1] << '\n';
    }

    return 0;
}
