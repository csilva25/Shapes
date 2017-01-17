//p6
//Cristian Silva
//upbeatfish
#ifndef SQUARE_H
#define SQUARE_H
#include "shape.h"
#include "grid.h"
using namespace std;

class Square : public Shape
{
public:
    Square(int x, int y, int size);
    void draw(Grid &grid);
    
protected:
    int m_size;
    
};


#endif