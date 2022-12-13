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
    void func1();
    void func2();
    ~point();
};

class circle
{
private:
    int r;
    point center;
public:
    int getr();

    void setr(int r_temp);

    void setcenter(point p_temp);

    point getp();

    void isin(point p_temp);
    
    circle();
    ~circle();
};