#include <iostream>
#include <string>
using namespace std;

int main()
{

    int tcase, length;
    string str;
    cin >> tcase;

    for (int i = 0; i < tcase; i++)
    {
        cin >> length >> str;
        int tSize = length * str.length();
        int idx = 0, strt = 0;
        string tmp[tSize];

        while (idx < tSize)
        {

            tmp[idx] = str.substr(strt, 1);

            idx++;

            if (idx == length || idx == length * 2 || idx == length * 3 || idx == length * 4)
            {
                strt++;
            }
        }

        for (int i = 0; i < tSize; i++)
        {
            cout << tmp[i];
        }
    }

    return 0;
}