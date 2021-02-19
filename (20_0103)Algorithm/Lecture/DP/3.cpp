#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// 참고 ) bottom - up 이 DP의 의미가 더 있다.

int dy[101];
int DFS(int n)
{
    if (n == 1 || n == 2)
        dy[n] = n;
    if (dy[n] > 0)
        return dy[n];
    else
        return DFS(n - 2) + DFS(n - 1);
}
int main(int argc, char const *argv[])
{

    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;

    // BOTTOM -UP방식

    // dy[1] = 1;
    // dy[2] = 2;
    // for (int i = 3; i <= n; i++)
    // {
    //     dy[i] = dy[i - 2] + dy[i - 1];
    // }

    // cout << dy[n] << endl;

    // TOP-DOWN 방식
    cout << DFS(n) << '\n';

    return 0;
}
