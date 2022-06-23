#pragma once
#include <iostream>
using namespace std;

class point
{
private:
    int x;
    int y;
public:
    int getx();
    int gety();
    void setx(int x_temp);
    void sety(int y_temp);
    point();
    point(int x_temp, int y_temp);
    point(const point &p_temp);
    ~point();
};

