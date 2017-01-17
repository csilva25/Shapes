//p6
//Cristian Silva
//upbeatfish
#ifndef GRID_H
#define GRID_H

#include <iostream>
using namespace std;

class Grid 
{
public:
    Grid();
    void set (int x, int y, char ch);
    void print();
    
private:
    char m_grid[24][60];

};
#endif