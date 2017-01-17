//p6
//Cristian Silva
//upbeatfish
#include "square.h"
#include <iostream>
using namespace std;

Square :: Square(int x, int y, int size) : Shape (x,y)
{
    m_size = size;
    
}

void Square::draw(Grid &grid)
{
    
    for (int i = m_x ; i < m_x + (m_size  ) ; i++)
    {
        for (int j = m_y ; j < m_y + (m_size  ) ; j++)
        {
            if (i == m_x || j == m_y || i == m_x + (m_size - 1) || j == m_y + (m_size - 1))
            {
                grid.set(i , j ,'*');
            }
           
        }
        
    }
    
}





