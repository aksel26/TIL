#include <iostream>
#include <string>

using namespace std;

int main()
{

    string str;

    //공백까지 입력받기
    getline(cin, str);

    //공백 제거
    str.erase(remove(str.begin(), str.end(), ' '), str.end());

    for (int i = 0; i < str.length(); i++)
    {
        // 소문자 변환
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i] + 32;
        }
    }

    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i];
    }

    return 0;
    
}