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
point:: point()
{
    cout << "point ���캯����" << endl;
}
//�вι��캯��
point:: point(int x_temp, int y_temp, int h_temp)
{
    x = x_temp;
    y = y_temp;
    h = new int(h_temp);
    cout << "point �вι��캯����" << endl;
}

point:: point(const point &p_temp)
{
    x = p_temp.x;
    y = p_temp.y;
    h = new int(*p_temp.h);
    cout << "point �������캯����" << endl;
}


point:: ~point()
{
    //��������ͨ���е������������ͷŵĲ���
    cout << "point ����������" << endl;
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
        cout << "����Բ�ϣ�" << endl;
    }
    else if(distance > 0)
    {
        cout << "����Բ�⣡" << endl;
    }
    else{
        cout << "����Բ�ڣ�" << endl;
    }
}

circle:: circle()
{
    cout << "circle ���캯����" << endl;
}
circle:: ~circle()
{
    cout << "circle ����������" << endl;
}

