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

    for (int i = 0; i < 2; i++)
    {

        if (input.find("c=", point) != -1 ||
            input.find("c-", point) != -1 ||
            input.find("d-", point) != -1 ||
            input.find("lj", point) != -1 ||
            input.find("nj", point) != -1 ||
            input.find("s=", point) != -1 ||
            input.find("z=", point) != -1)
        {
            wordLength -= 1;
            point += 2;
        }

        if (input.find("dz=", point) != -1)
        {

            wordLength -= 2;
            point += 3;
        }
    }
    cout << wordLength << endl;

    return 0;
}
