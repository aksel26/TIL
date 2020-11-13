#include <stdio.h>

void D(int v)
{
    if (v > 7)
        return;
    else
    {
        
        //---전위순회 위치 ----
        // printf("%d ", v);

        //왼쪽노드
        D(v * 2);

        //---중위순회 위치 ----
        // printf("%d ", v);

        //오른쪽노드
        D(v * 2 + 1);

        //---후위순회 위치 ----
        printf("%d ", v);
    }
}
int main()
{
    D(1);
    return 0;
}