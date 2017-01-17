//p6
//Cristian Silva
//upbeatfish
#include"point.h"
#include "grid.h"
#include<iostream>
using namespace std;

Point::Point(int x, int y, char ch) : Shape (x,y)
{
    m_ch = ch;
    
}




void Point::draw(Grid &grid)
{
    grid.set(m_x, m_y, m_ch);
   
    
    
}

