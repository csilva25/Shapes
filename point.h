//p6
//Cristian Silva
//upbeatfish
#ifndef POINT_H
#define POINT_H
#include "shape.h"
#include <iostream>
using namespace std;
class Point : public Shape
{
public:
    Point(int x, int y, char ch);
    void draw(Grid &grid);
protected:
    char m_ch;
};
#endif