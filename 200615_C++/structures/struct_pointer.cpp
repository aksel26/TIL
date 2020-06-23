#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    struct meminfo
    {
        char name[20];
        int salary;
    };

    int size;
    cout << "배열의 크기는 ?";

    cin >> size; 

    //동적배열 선언
    meminfo *ptr = new meminfo;

    int count = 0, i;

    for (i = 0; i < size; i++)
    {
        cout << "이름은 ? ";
        cin >> (ptr + i)->name;
        // 프로그램 종료
        if (strcmp((ptr + i)->name, "end") == 0)
            break;
        cout << "연봉은 ? ";
        cin >> (ptr + i)->salary;
    }
    count = i;
    for (i = 0; i < count; i++)
    {
        cout << (ptr + i)->name << "의 연봉은 "
             << (ptr + i)->salary << "입니다 " << endl;
    }

    return 0;
}