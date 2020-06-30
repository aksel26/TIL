#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include <iostream>

using namespace std;

class Rectangle : public Shape
{
private:
    int width;
    int height;

public:
    Rectangle()
    {
        width = height = 0;
    }

    Rectangle(int w, int h)
    {
        width = w;
        height = h;
    }

    Rectangle(int x, int y, int w, int h) : Shape(x, y), width(w), height(h)
    {
        cout << "파생 생성자" << endl;
    }

    ~Rectangle()
    {
        cout << "Rectangle 소멸자" << endl;
    }
    void Draw()
    {
        cout << "사각형 그리기" << endl;
        //Shape클래스의 x, y 를 직접 이용하고 있음.
        cout << "사각형 위치 (" << x << ", " << y << ")" << endl;
        // Shape 클래스의 Draw함수를 직접 호출하는 방법
        // 기본 클래스에도 있고 파생 클래스에도 있다.
        // ==> 재정의 되었다.(overloading)
        Shape::Draw();
        cout << "가로 = " << width;
        cout << ", 세로= " << height << endl;
        cout << "도형 위치(" << x << ", " << y << ")" << endl;
    }

    void setWidth(int w) { width = w; }
    void setHeight(int h) { height = h; }
};

#endif