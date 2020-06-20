#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "배열의 크기는 ?";
    cin >> size;
    int *p = new int[size];

    if (p == NULL)
    {

        cout << "메모리 할당 실패 " << endl;

        return 1;
    }

    double *dp = new double[size];
    if (p == NULL)
    {

        cout << "메모리 할당 실패 " << endl;

        return 1;
    }
    int i;

    cout << "정수 5개 입력" << endl;
    for (i = 0; i < size; i++)
    {
        cin >> p[i];
    }

    cout << "실수 5개 입력" << endl;
    for (i = 0; i < size; i++)
    {
        cin >> dp[i];
    }

    cout << "입력받은 수는 다음과 같습니다" << endl;
    for (i = 0; i < size; i++)
    {
        cout << "(p+" << i << ") = " << *(p + i);
        cout << ", *(dp+" << i << ") = " << *(dp + i) << endl;
    }

    delete[] p ;
    p = NULL;
    delete[] dp ;
    dp = NULL;

    return 0;
}