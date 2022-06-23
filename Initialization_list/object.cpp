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
// point:: point()
// {
//     cout << "point 构造函数！" << endl;
// }

point:: point():x(15),y(15)
{
    cout << "point 构造函数！" << endl;
}

//有参构造函数
// point:: point(int x_temp, int y_temp)
// {
//     x = x_temp;
//     y = y_temp;
//     cout << "point 有参构造函数！" << endl;
// }
point:: point(int x_temp, int y_temp):x(x_temp),y(y_temp)
{

    cout << "point 有参构造函数！" << endl;
}


point:: point(const point &p_temp)
{
    x = p_temp.x;
    y = p_temp.y;
    cout << "point 拷贝构造函数！" << endl;
}


point:: ~point()
{
    cout << "point 析构函数！" << endl;
}

