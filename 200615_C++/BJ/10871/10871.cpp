#include <iostream>

using namespace std;

int main()
{

    int n, x, nums;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> nums;
        if (nums < x)
        {
            cout << nums << " ";
        }
    }

    return 0;

}

// 입력
// 10 5
// 1 10 4 9 2 3 8 5 7 6
// 출력
// 1 4 2 3