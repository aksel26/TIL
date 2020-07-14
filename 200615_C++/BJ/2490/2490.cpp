#include <iostream>

using namespace std;

int main()
{

    int num;
    int cnt1 = 0;
    int cnt0 = 0;
    int cnt = 0;

    // while (1)
    // {
    //     cin >> num;

    //     if (num == 1)
    //     {
    //         cnt1++;
    //         cnt++;
    //     }
    //     else if (num == 0)
    //     {
    //         cnt0++;
    //         cnt++;
    //     }

    //     if (cnt == 4)
    //     {
    //         break;
    //     }
    // }

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 4; j++)
        {
            cin >> num;

            if (num == 1)
            {
                cnt1++;
            }
            else if (num == 0)
            {
                cnt0++;
            }
        }
        if (cnt0 == 0)
        {
            cout << "E" << endl;
            cnt0 =0;
        }
        else if (cnt0 == 1)
        {
            cout << "A" << endl;
            cnt0 =0;
        }

        else if (cnt0 == 2)
        {
            cout << "B" << endl;
            cnt0 =0;
        }
        else if (cnt0 == 3)
        {
            cout << "C" << endl;
            cnt0 =0;
        }
        else if (cnt0 == 4)
        {
            cout << "D" << endl;
            cnt0 =0;
        }
        // switch (cnt0)
        // {
        // case 0:
        //     cout << "E" << endl;
        //     break;
        // case 1:
        //     cout << "A" << endl;
        //     break;
        // case 2:
        //     cout << "B" << endl;
        //     break;
        // case 3:
        //     cout << "C" << endl;
        //     break;
        // case 4:
        //     cout << "D" << endl;
        //     break;
        // default:
        //     break;
        // }
    }

    return 0;
}