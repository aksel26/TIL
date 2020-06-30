#include <iostream>
#include "shape.h"
#include "rectangle.h"

using namespace std;

int main()
{

    // 리스트를 이용한 생성자 호출
    Rectangle r(1, 2, 5, 5);

    r.Draw();
    r.Move(10, 10);
    r.Draw();
    r.setWidth(20);
    r.setHeight(10);
    r.Draw();

    return 0;
}


// 결과
// Shape 생성자 (초기화) 
// 파생 생성자
// 사각형 그리기
// 사각형 위치 (1, 2)
// 도형 위치(1, 2)
// 가로 = 5, 세로= 5
// 도형 위치(1, 2)
// 사각형 그리기
// 사각형 위치 (10, 10)
// 도형 위치(10, 10)
// 가로 = 5, 세로= 5
// 도형 위치(10, 10)
// 사각형 그리기
// 사각형 위치 (10, 10)
// 도형 위치(10, 10)
// 가로 = 20, 세로= 10
// 도형 위치(10, 10)
// Rectangle 소멸자
// Shape 소멸