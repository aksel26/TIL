
#include <iostream>
#include <string>

using namespace std;
int main()
{
    string num;
    cin >> num;

    string temp = num.substr(0, 2);
    int birth = stoi(temp);

    if (num.at(7) == '1' || num.at(7) == '3')
    {

        if (num.at(7) == '1')
        {

            int result = 1900 + birth;
            int age = (2019 - result) + 1;
            cout << age << ' ' << "M" << endl;
        }
        else if (num.at(7) == '3')
        {
            int result = 2000 + birth;
            int age = (2019 - result) + 1;
            cout << age << ' ' << "M" << endl;
        }
    }
    else if (num.at(7) == '2' || num.at(7) == '4')
    {

        if (num.at(7) == '2')
        {

            int result = 2000 + birth;
            int age = (2019 - result) + 1;
            cout << age << ' ' << "W" << endl;
        }
        else if (num.at(7) == '4')
        {
            int result = 2000 + birth;
            int age = (2019 - result) + 1;
            cout << age << ' ' << "W" << endl;
        }
    }

    return 0;
}
