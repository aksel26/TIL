#include <iostream>
#include <string>
#include <stack>

using namespace std;
int alphabet[26];
int main()
{
    //테스트 케이스
    int tcase;
    cin >> tcase;

    //스택
    stack<char> s;
    // 스택에서 이용할 변수
    string tmp;

    for (int i = 0; i < tcase; i++)
    {
        int cnt = 0;

        //문자열 입력
        string str;
        cin >> str;

        // 연속된 문자 제거하면서 스택에 저장
        for (int i = 0; i < str.length(); i++)
        {
            s.push(str[i]);

            if (str[i] != str[i + 1])
            {
                tmp += str[i];
            }
        }

        int idx = 0;

        // 한글자 뒤에 중복된 글자가 없으면 +1
        for (int i = 0; i < tmp.length(); i++)
        {

            idx = tmp[i];

            alphabet[idx] = idx;
            if (alphabet[idx] != 0)
            {
                cout << idx << endl;
                // cout<<alphabet[idx]<<endl;
                cnt = 1;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}