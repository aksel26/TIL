#include <iostream>

using namespace std;

int main()
{
    int score;
    cout << "점수 입력 : ";
    cin >> score;

    if (score < 0 || score > 100)
    {
        cout << "유효하지 않은 점수입니다" << score << endl;
    }
    else
    {
        switch (score / 10)
        {
        case 10:
        case 9:
            cout << "A학점" << endl;
            break;
        case 8:
            cout << "B학점" << endl;
            break;
        case 7:
            cout << "C학점" << endl;
            break;
        case 6:
            cout << "D학점" << endl;
            break;
        default:
            cout << "F학점" << endl;
            break;
        }
    }

    return 0;
}