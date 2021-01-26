#include <iostream>
#include <vector>
#include <queue>

using namespace std;
int num[1001];
int main(int argc, char const *argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }
    int cnt = 1;
    cout << "<";
    while (!q.empty())
    {
        for (int i = 0; i < k - 1; i++)
        {
            q.push(q.front());
            q.pop();
        }
        cout << q.front();
        q.pop();

        if (!q.empty())
        {
            cout << ", ";
        }
    }
    cout << ">\n";

    return 0;
}
