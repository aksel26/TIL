#include <iostream>
#include <string>
using namespace std;

int main()
{

    //문제 조건
    int tcase, length;
    string str;

    // 테스크 케이스
    cin >> tcase;

    for (int i = 0; i < tcase; i++)
    {
        //길이와 문자열 입력
        cin >> length >> str;

        //string배열 크기
        int tSize = length * str.length();
        string tmp[tSize];

        int idx = 0, strt = 0;

        
        while (idx < tSize)
        {
            //substr 함수로 tmp배열에 담기
            tmp[idx] = str.substr(strt, 1);

            idx++;

            // idx와 처음 입력한 length의 길이 * 1, 2, 3 ... 이 같으면
            // substr의 인자 strt수를 증가시킴
            for (int i = 1; i < length; i++)
            {
                if (idx == length * i)
                {
                    strt++;
                }
            }
        }

        for (int i = 0; i < tSize; i++)
        {
            cout << tmp[i];
        }
        str = "";

        //줄바꿈
        cout << "\n";
    }

    return 0;
    
}
