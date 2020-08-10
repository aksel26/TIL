#include <stdio.h>

int getparent(int parent[], int x)
{
    // 재귀함수의 종료 부분
    if (parent[x] == x)
        return x;

    return parent[x] = getparent(parent, parent[x]);
}

int unionParent(int parent[], int a, int b)
{
    a = getparent(parent, a);
    b = getparent(parent, b);
    if (a < b)
        parent[b] = a;
    else
        parent[a] = b;
}

// 같은 부모를 가지는지 확인
int findparent(int parent[], int a, int b)
{
    a = getparent(parent, a);
    b = getparent(parent, b);
    if (a == b)
        return 1;
    return 0;
}

int main()
{
    int parent[11];
    for (int i = 1; i <= 10; i++)
    {
        parent[i] = i;
    }

    unionParent(parent, 1, 2);
    unionParent(parent, 2, 3);
    unionParent(parent, 3, 4);
    unionParent(parent, 5, 6);
    unionParent(parent, 6, 7);
    unionParent(parent, 7, 8);

    printf("1과 5는 연결되어 있나 ? %d\n", findparent(parent, 1, 5));

    unionParent(parent, 1, 5);
    printf("1과 5는 연결되어 있나 ? %d\n", findparent(parent, 1, 5));

    
    return 0;
}