#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    int wordLength = 0;
    int point = 0;
    cin >> input;

    wordLength = input.length();
    cout << wordLength << endl;
    while (point == 0)
    {

        if (input.find("c=", point) != -1)
        {
            wordLength -= 1;
            point += 2;
        }
        if (input.find("c-", point) != -1)
        {
            wordLength -= 1;
            point += 2;
        }
        if (input.find("d-", point) != -1)
        {
            wordLength -= 1;
            point += 2;
        }
        if (input.find("lj", point) != -1)
        {
            wordLength -= 1;
            point += 2;
        }
        if (input.find("nj", point) != -1)
        {
            wordLength -= 1;
            point += 2;
        }
        if (input.find("s=", point) != -1)
        {
            wordLength -= 1;
            point += 2;
        }
        if (input.find("z=", point) != -1)
        {
            wordLength -= 1;
            point += 2;
        }

        if (input.find("dz=", point) != -1)
        {

            wordLength -= 2;
            point += 3;
        }

        if (point >= wordLength)
        {
            cout << wordLength << "  " << point << endl;

            break;
        }
    }

    cout << wordLength << endl;

    return 0;
}
