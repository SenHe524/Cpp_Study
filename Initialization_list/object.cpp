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

//�޲ι��캯����Ĭ�ϵ��ô˹��캯����
// point:: point()
// {
//     cout << "point ���캯����" << endl;
// }

point:: point():x(15),y(15)
{
    cout << "point ���캯����" << endl;
}

//�вι��캯��
// point:: point(int x_temp, int y_temp)
// {
//     x = x_temp;
//     y = y_temp;
//     cout << "point �вι��캯����" << endl;
// }
point:: point(int x_temp, int y_temp):x(x_temp),y(y_temp)
{

    cout << "point �вι��캯����" << endl;
}


point:: point(const point &p_temp)
{
    x = p_temp.x;
    y = p_temp.y;
    cout << "point �������캯����" << endl;
}


point:: ~point()
{
    cout << "point ����������" << endl;
}

