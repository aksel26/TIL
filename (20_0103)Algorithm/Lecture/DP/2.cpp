#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Top - Down 방식
// bottom - up 이 DP의 의미가 더 있다.

int dy[101]; // 메모이제이션 용

int DFS(int x)
{
    if (dy[x] > 0)
        return dy[x]; // 메모이제이션

    if (x == 1 || x == 2)
        return x;
    else
        return dy[x] = DFS(x - 1) + DFS(x - 2);
}
int main(int argc, char const *argv[])
{

    ios_base::sync_with_stdio(false);
    int n;

    cin >> n;
    cout << DFS(n);

    return 0;
}
