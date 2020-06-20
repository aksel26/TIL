#include<iostream>
#include<cstring>

using namespace std;
#define MAX 10

int main(){

    struct meminfo
    {
        char name[20];
        int salary;

    };

    meminfo person[MAX]={
        {"김대표", 100000},
        {"이부장", 70000},
        {"홍과장", 40000},

    };
    
    int count = 3, i;

    // count(3)부터 시작하므로 구조체 멤버 뒤에 추가된다
    for ( i = count; i < MAX; i++)
    {
        cout<<"이름은 ? ";
        cin>>person[i].name;
        // 프로그램 종료
        if(strcmp(person[i].name,"end")==0)
            break;
        cout<<"연봉은 ? ";
        cin>>person[i].salary;
        // 다음 멤버 추가 순서
        count++;
    }

    for ( i = 0; i < count; i++)
    {
        cout<< person[i].name <<"의 연봉은 "
            <<person[i].salary<<"입니다 "<<endl;

    }

    return 0;
        
    
}