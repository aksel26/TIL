#include <iostream>

using namespace std;

int main()
{

    int students = 0, score = 0, sum = 0;

    while (students < 5)
    {
        cin >> score;

        if (score < 40)
        {
            sum += 40;
        }
        else
        {
            sum += score;
        }
        students++;
    }

    cout << sum / 5 << endl;

    return 0;
}