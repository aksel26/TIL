#include "thisPointer.h"
#include <iostream>
#include <cstring>

using namespace std;

// 디폴트 생성자
Person::Person()
{
    name = new char[20];
    strcpy(name, "");
    age = 0;
    cout << "디폴트 생성자" << endl;
}

// 인자있는 생성자
Person::Person(const char *name, int age)
{
    this->name = new char[20];
    strcpy(this->name, name);
    this->age = age;
    cout << "인자 있는 생성자" << endl;
}

//복사 생성자
Person::Person(const Person &arg)
{

    // 동적 메모리 할당 받음 (new)
    name = new char[20];

    // 메모리 복사, 주소 복사가 아닌 메모리의 내용이 복사됨
    strcpy(name, arg.name);
    age = arg.age;
    cout << "복사 생성자" << endl;
}

Person::~Person()
{
    //메모리 해제
    delete[] name;
    cout << "소멸자" << endl;
}

void Person::Show() const
{
    cout << "name : " << name << ", age : " << age << endl;
}

int main()
{
    Person p1("홍길동", 24);

    Person p2(p1); //Person p2 = p1; // 복사 생성자로 객체 생성
    p2.Show();

    Person *ptr1 = new Person("허균", 59);
    Person *ptr2 = new Person(*ptr1); // 복사 생성자로 객체 생성

    ptr2->Show();

    delete ptr1;
    delete ptr2;

    return 0;
}