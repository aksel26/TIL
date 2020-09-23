#include <iostream>

using namespace std;
const int MAX = 8 + 1;
int n, m;
int arr[MAX];
bool visited[MAX];

void func(int cnt)
{
    if (cnt == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << arr[i] << " ";
        }
        cout << '\n';
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            visited[i] = true;
            arr[cnt] = i;
            func(cnt + 1);
            visited[i] = false;
        }
    }
}
int main()
{
    cin >> n >> m;
    func(0);
    return 0;
}