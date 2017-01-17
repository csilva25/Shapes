//p6
//Cristian Silva
//upbeatfish
#include "triangle.h"
#include "grid.h"
#include <iostream>
using namespace std;

Triangle :: Triangle(int x, int y) : Shape (x,y)
{

    
}

void Triangle::draw(Grid &grid)
{
    
    
    grid.set (m_x + 2,m_y,'+');
    
    grid.set (m_x +1, m_y+1, '+');
    //space
    grid.set (m_x+3,m_y+1, '+');
    
    grid.set (m_x, m_y+2,'+');
    grid.set (m_x+1, m_y+2,'+');
    grid.set (m_x+2, m_y+2,'+');
    grid.set (m_x+3, m_y+2,'+');
    grid.set (m_x+4, m_y+2,'+');
    
}





