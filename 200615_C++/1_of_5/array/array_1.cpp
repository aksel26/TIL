#include <bits/stdc++.h>

using namespace std;

struct Employee
{
    int age;
    char name;
};

struct Person
{
    string name;
    string surname;
    int age;
};

bool operator<(const Employee &lhs, const Employee &rhs)
{
    return lhs.age < rhs.name;
};
int main()
{

    vector<Employee> v{
        {200, 'A'}, {200, 'B'}, {200, 'C'}, {200, 'D'}, {200, 'E'}};

    for (int i = 9; i < 100; i++)
    {
        v.emplace_back(Employee{i, 'Z'});
    };

    // stable_sort(v.begin(), v.end());
    sort(v.begin(), v.end());
    for (const Employee &e : v)
    {
        cout << e.age << ", " << e.name << endl;
    }
}