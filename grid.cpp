//p6
//Cristian Silva
//upbeatfish
#include "grid.h"
#include <iostream>
using namespace std;


Grid::Grid()
{
    for (int i = 0 ; i < 24 ; i ++ )
    {
         
        
        for (int j = 0 ; j < 60 ; j ++)
        {
            m_grid[i][j] = ' ';
            
        }
    }
}

void Grid::set(int x, int y, char ch)
{

    if (x < 60 && y < 24) {
        m_grid[y][x] = ch;
    }
    else
        return;
    
}
void Grid::print()
{
    for (int i = 0 ; i < 24 ; i ++ )
    {
        for (int j = 0 ; j < 60 ; j ++)
        {
            cout << m_grid[i][j];
            
        }
        cout << endl;
    }
}









