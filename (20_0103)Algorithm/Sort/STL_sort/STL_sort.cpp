#include <iostream>
#include <algorithm>
using namespace std;
// bool compare(int a, int b)
// {
// return a < b;
// a가 b보다 작을때 true --> 오름차순 정렬
// default

// return a > b;
// 내림차순 정렬
// }

class Student
{
public:
    string name;
    int score;

    Student(string name, int score)
    {
        this->name = name;
        this->score = score;
    }

    bool operator<(const Student &student) const
    {
        return this->score < student.score;
    }
};

bool compare(int a, int b)
{
    return a > b;
}

int main()
{
    // int a[10] = {1, 2, 4, 5, 9, 93, 34, 2, 1, 2};

    // sort(a, a + 10, compare);

    // for (int i = 0; i < 10; i++)
    // {
    //     cout << a[i] << endl;
    // }

    Student students[] = {
        Student("유재석", 90),
        Student("박명수", 88),
        Student("노홍철", 98),
        Student("정형돈", 91)};

    sort(students, students + 5);

    for (int i = 0; i < 4; i++)
    {
        cout << students[i].name << endl;
    }

    return 0;
}