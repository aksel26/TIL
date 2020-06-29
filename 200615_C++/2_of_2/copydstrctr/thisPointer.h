#ifndef PERSON_H
#define PERSON_H

class Person
{
private:
    char *name; // 멤버변수 name은 포인터변수 (동적메모리를 할당받아 사용하는 멤버)
    int age;

public:
    Person();
    Person(const char *name, int age);
    Person(const Person &arg);
    ~Person();
    void Show() const;
};

#endif