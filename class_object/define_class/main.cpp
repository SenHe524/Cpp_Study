#include <iostream>
#include <string>
#include "object.h"
using namespace std;
void isin(circle &c, point &p);
void constructor();
void constructor_use_1();
void constructor_use_2();
point constructor_use_3();
void dowork_2();
int main()
{
    // constructor();
    // constructor_use_1();
    // constructor_use_2();
    dowork_2();
    system("pause");
    return 0;
}

/**���캯������**/
//ע��Ĭ������£�c++�����������ٸ�һ�����������������
//1.Ĭ�ϵ��޲εĹ��캯��
//2.Ĭ�ϵ���������
//3.Ĭ�ϵĿ������캯����������ֵ���п���
/*
���������Ա�ṩ���вι��죬��û���ṩ�޲ι��죬����������ṩĬ�ϵ��޲ι��죬
����ʱ���ܵ����޲ι��죺point p;�ᱨ���� "point" ������Ĭ�Ϲ��캯��
���������Ա�ṩ�˿������죬��û���ṩ�޲ι����вι��죬����������ṩ��ͨ���죬
����ʱ���ܵ����޲ι��죺point p;���� point p(10,5); �ᱨ���� "point" ������Ĭ�Ϲ��캯��


*/
void constructor()
{
    /****���ŷ�****/
    // //�޲ι���
    // point p1;
    // //�вι���
    // point p2(0, 10);
    // //��������
    // point p3(p2);

    //�������󣺵�ǰ��ִ�����ϵͳ�����̻��յ��������󣨼���������
    point(10, 0);

    /****��ʽ��****/
    //�޲ι���
    point p1;
    //�вι���
    point p2 = point(10, 5);
    //��������
    point p3 = point(p2);
    //ע����Ҫ�� �������캯�� ��ʼ�� ��������
    //�磺point(p2); 
    //��ʱ�������ʾp2�ض��壬�������Ὣpoint(p2);���Ϊ point p2;
    p3.func2();

    point p_r;
    
    circle c;

    p1.setx(0);
    p1.sety(10);

    p_r.setx(0);
    p_r.sety(0);

    c.setcenter(p_r);
    c.setr(10);

    c.isin(p2);
    c.isin(p1);

    p1.setx(0);
    p1.sety(15);
    isin(c, p1);



}

/***��������ʹ��ʱ��***/
// 1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���µĶ���
void constructor_use_1()
{
    point p1(10, 5);
    point p2(p1);
    cout << p2.getx() << p2.gety() << endl;
}

// 2.ֵ���ݵķ�ʽ��������������
void dowork_1(point p)
{

}
void constructor_use_2()
{
    point p1;
    dowork_1(p1);//��ʱp1��ͨ�������������θ�dowork_1�е��β�p��
}

//3.ͨ������ֵ�ķ�ʽ���ݾֲ�����
point constructor_use_3()
{
    point p(10, 5);
    cout << "I'm Here!--------1\t" << (int *)&p << endl;
    return p;
}
void dowork_2()
{
    point p1 = constructor_use_3();//�˴���Ӧ�õ��ÿ������캯��������������Ż�����ֻ������һ�ι��������
    cout << "I'm Here!\t" << (int *)&p1 << endl;
    cout << p1.getx() << p1.gety()<<endl;
}

void isin(circle &c, point &p)
{
    int distance = (c.getp().getx() - p.getx()) * (c.getp().getx() - p.getx()) + 
                    (c.getp().gety() - p.gety()) * (c.getp().gety() - p.gety()) - c.getr() * c.getr();
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