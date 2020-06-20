#include <iostream>

#include <cstring>

using namespace std;

int main(){

    struct MEMINFO{
        char name[20];
        int salary;

    };


//MEMINFO 구조체의 변수 s1선언과 동시에 초기화
    MEMINFO s1 = {"김과장", 3000};

// MEMINFO 구조체의 s2변수 선언
    MEMINFO s2;

// 대입
    s2 = s1;

    cout<<"s2의 name : "<<s2.name<<endl;
    cout<<"s2의 salary : "<<s2.salary<<endl;

// 결과
// s2의 name : 김과장
// s2의 salary : 3000
    return 0;



}