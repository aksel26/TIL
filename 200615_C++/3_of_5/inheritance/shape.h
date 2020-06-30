#ifndef SHAPE_H_
#define SHAPE_H_

#include <iostream>

using namespace std;

class Shape
{
protected:
    int x;
    int y;

public:
    //각 멤버함수의 정의부분 기술
    Shape()
    {
        x = 0;
        y = 0;
    }

    // Shape(int xpos, int ypos){x = xpos; y = ypos;}

    Shape(int xpos, int ypos) : x(xpos), y(ypos)
    {
        cout << "Shape 생성자 (초기화) " << endl;
        //  x = xpos, y = ypos
    }
    ~Shape()
    {

        cout << "Shape 소멸" << endl;
    }

    void Draw()
    {
        cout << "도형 위치(" << x << ", " << y << ")" << endl;
    }

    void Move(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
};

#endif