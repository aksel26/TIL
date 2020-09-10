#include <iostream>
#include <set>

using namespace std;
template <typename T>
void print(set<T> &s)
{
    cout << "[";

    for (typename set<T>::iterator itr = s.begin(); itr != s.end(); itr++)
    {
        cout << *itr << " ";
    }

    cout << "]" << endl;
}

int main()
{

    set<int> s;

    s.insert(10);
    s.insert(30);
    s.insert(20);
    s.insert(50);
    s.insert(40);

    cout << "순서대로 정렬되서 나온다" << endl;

    print(s);

    cout << "20이 s의 원소인가 ?";
    auto itr = s.find(20);
    if (itr != s.end())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}