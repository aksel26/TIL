#include <stdio.h>

using namespace std;

int main()
{
    char str[31];

    gets(str);
    int left = 0, right = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '(')
        {
            left++;
        }
        else if (str[i] == ')')
        {
            right++;

            // 반례
                // (()))(
                // 수가 같은데 불완전하 괄호이다.
            if (right > left)
                break;
        }
    }
    if (left == right)
        printf("%s\n", "YES");
    else
        printf("%s\n", "NO");

    return 0;
}