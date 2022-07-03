#include <iostream>
#include <string>
#include "object.h"
using namespace std;


int point:: getx()
{
    return x;
}
int point:: gety()
{
    return y;
}
void point:: setx(int x_temp)
{
    x = x_temp;
}
void point:: sety(int y_temp)
{
    y = y_temp;
}


//无参构造函数（默认调用此构造函数）
point:: point()
{
    cout << "point 构造函数！" << endl;
}
//有参构造函数
point:: point(int x_temp, int y_temp, int h_temp)
{
    x = x_temp;
    y = y_temp;
    h = new int(h_temp);
    cout << "point 有参构造函数！" << endl;
}

point:: point(const point &p_temp)
{
    x = p_temp.x;
    y = p_temp.y;
    h = new int(*p_temp.h);
    cout << "point 拷贝构造函数！" << endl;
}


point:: ~point()
{
    //析构函数通常承担将堆区数据释放的操作
    cout << "point 析构函数！" << endl;
}


int circle:: getr()
{
    return r;
}
void circle:: setr(int r_temp)
{
    r = r_temp;
}
void circle:: setcenter(point p_temp)
{
    center = p_temp;
}
point circle:: getp()
{
    return center;
}

void circle:: isin(point p_temp)
{
    int distance = (center.getx() - p_temp.getx()) * (center.getx() - p_temp.getx()) + 
                    (center.gety() - p_temp.gety()) * (center.gety() - p_temp.gety()) - r * r;
    if(distance == 0)
    {
        cout << "点在圆上！" << endl;
    }
    else if(distance > 0)
    {
        cout << "点在圆外！" << endl;
    }
    else{
        cout << "点在圆内！" << endl;
    }
}

circle:: circle()
{
    cout << "circle 构造函数！" << endl;
}
circle:: ~circle()
{
    cout << "circle 析构函数！" << endl;
}

