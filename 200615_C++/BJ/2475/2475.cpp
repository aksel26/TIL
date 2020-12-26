#include <iostream>
#include <string>

using namespace std;

int main()
{

    int a;
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a);

        int temp = a * a;
        sum += temp;
    }

    printf("%d\n", sum % 10);

    return 0;
}