#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
    int n, i, key, lt = 0, rt, mid;

    scanf("%d %d", &n, &key);

    vector<int> a(n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // 맨뒤보다 바로 앞 지점
    // printf("%d\n", *(a.end()-1));
    // 81 (정렬 전)

    sort(a.begin(), a.end());

    // 벡터 선언 다른 유형
    // vector <int> aa;
    // 메모리에는 a라는 이름만 있고 공간이 아직 생기지 않은 상태.
    // int tmp;
    // for ( i = 0; i < n; i++)
    // {
    //     scanf("%d", &tmp);
    //     a.push_back(tmp);
    // }

    rt = n - 1;
    while (lt <= rt)
    { //교차되지 않을 때까지임을 의미
        mid = (lt + rt) / 2;

        if (a[mid] == key)
        {
            printf("%d\n", mid + 1);
            return 0;
        }
        else if (a[mid] > key)
        {
            rt = mid - 1;
        }
        else
            lt = mid + 1;
    }



    return 0;
}