#include <iostream>
#include <array>
using namespace std;

int main()
{

    int size, max = -100000, idx = 0;

    int array1[9];
    for (int i = 0; i < 9; i++)
    {
        cin >> array1[i];

        if (max < array1[i])
        {
            max = array1[i];
            idx = i + 1;
        }
    }

    cout << max << "\n"
         << idx << endl;
}