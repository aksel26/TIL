#include <iostream>
#include <string>
#include <cstring> //strcpy 사용

using namespace std;

int main()
{

    //string 객체 생성
    string s1, s2;

    cout << "문자열을 입력하세요 : ";
    getline(cin, s1);
    cout << "문자열을 입력하세요 : ";
    cin >> s2;

    if (s1 == s2)
    {

        cout << "두 문자가 동일합니다" << endl;
    }
    else
    {
        cout << "두문자가 다릅니다" << endl;
    }

    cout << "s1 + s2 : " << s1 + s2 << endl;
    s1 = s2;
    cout << "s1 = s2 : " << s1  << endl;

    char *ptr = new char[s1.size() + 1];
    strcpy(ptr, s1.c_str());
    cout << "ptr : " << ptr << endl;

    cout << "ll 단어의 시작 위치 " << s1.find("i") << endl;
    cout << "before s2 : " << s2 << endl;

    s2.erase();
    s2 = s2 + "C++";
    cout << "after s2 : " << s2 << endl;

    return 0;
}
