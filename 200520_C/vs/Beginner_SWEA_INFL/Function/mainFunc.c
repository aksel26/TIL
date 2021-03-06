#include <stdio.h>

// int add(int x, int y);

int add(int a, int b);
int substract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main(void)
{

    // int main(int argc, char *argv[])
    // argc : 인자 개수 전달,
    // *argv[] : 인자 목록 전달 , char*배열이나 2중 포인터 형으로 수신

    // 함수포인터와 void포인터

    //     함수 포인터
    //         포인터 - > 함수의 시작 번지를 넣어 사용 가능
    //                     프로그램 컴파일 시 생성
    //                     실행시 함수 시작 주소를 의미

    //                 함수 시작 주소를 포인터 변수에 대입 => 포인터 변수를 이용해 함수 호출

    //         기능
    //             다양한 함수들이 서로 다른 환경에서 호출되어야 하는 경우
    //                 -> 컴파일러, 어셈블러, 인터프리터 등의 시스템SW 작성 시

    //             동적으로 함수를 불러다 사용하고 필요없는 경우 삭제하는 동적 라이브러리 함수를 이용해야 하는 경우

    //         선언 방법
    //             리턴타입 (*함수포인터변수명)(매개변수목록);
    //             int(*fun)(int num);
    //                 시작 주소를 대입해 사용할 수 있음,
    //                 int값을 반환하고 매개변수로는 int형의 num 하나만 선언해야 함

    //         함수의 시작주소 확인 방법
    //             배열이름 = 배열 시작 주소, 함수이름 = 함수 시작 번지

    // int (*calc)(int x, int y);
    // int x, y, z;

    // x = 100;
    // y = 200;
    // calc = add;
    // z = calc(x, y);
    // printf("add = %d\n", z);

    //     함수 포인터 배열
    //         리턴타입 (*함수포인터배열명[크기]))(매개변수목록);

    int (*ftpr[4])(int a, int b);
    int a, b, result, op;

    ftpr[0] = add;
    ftpr[1] = substract;
    ftpr[2] = multiply;
    ftpr[3] = divide;

    do
    {
        printf("두 수를 입력하세요\n");
        scanf("%d %d", &a, &b);

        printf("1. 더하기 2. 빼기 3. 곱하기 4.나누기 5.종료 \n");
        printf("선택하십시오 [0-5]--->");
        scanf("%d", &op);

        if (op == 5)
            break;

        result = (*ftpr[op - 1])(a, b);
        printf("%d\n", result);
    } while (1);

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int substract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}
int divide(int a, int b)
{
    if (b == 0)
    {
        printf("can't divide by zero");
        return 0;
    }
    else
    {
        return a / b;
    }
}
