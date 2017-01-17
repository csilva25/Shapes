//p6
//Cristian Silva
//upbeatfish
#ifndef CIRCLE_H
#define CIRCLE_H
#include "circle.h"
#include "shape.h"
#include <iostream>
using namespace std;

class Circle : public Shape
{
public:
    Circle(int y, int x);
    void draw(Grid &grid);
    
protected:
  
    
};


#endif