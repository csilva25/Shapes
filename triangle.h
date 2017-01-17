//p6
//Cristian Silva
//upbeatfish
#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "shape.h"
#include <iostream>
using namespace std;
class Triangle : public Shape
{
public:
    Triangle(int x, int y);
    void draw(Grid &grid);
    
protected:

    
    
};


#endif