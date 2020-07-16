#include <iostream>

using namespace std;

int main()
{

    int date, num;
    cin >> date;
    int cnt = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> num;
        if (date == num)
            cnt++;
    }

    cout << cnt << endl;

    return 0;
}