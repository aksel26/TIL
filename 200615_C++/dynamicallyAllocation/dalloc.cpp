#include <iostream>

using namespace std;

int main()
{

    int *p = new int(0); //초기화 할 값 명시
    // new 연산자의 수행 결과 : 동적할당 실패 시 null반환

    if (p == NULL)
    {
        cout << "memory allocation failed" << endl;
        exit(1);
    }

    *p = 100;

    delete p;
    p = NULL;
}