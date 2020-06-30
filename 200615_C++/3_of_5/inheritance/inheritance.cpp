#include <iostream>
#include "shape.h"
#include "rectangle.h"

using namespace std;

int main()
{

    Rectangle r(1, 2, 5, 5);

    r.Draw();
    r.Move(10, 10);
    r.Draw();
    r.setWidth(20);
    r.setHeight(10);
    r.Draw();

    return 0;
}