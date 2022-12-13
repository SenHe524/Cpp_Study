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

/**构造函数举例**/
//注：默认情况下：c++编译器会至少给一个类添加三个函数：
//1.默认的无参的构造函数
//2.默认的析构函数
//3.默认的拷贝构造函数，对属性值进行拷贝
/*
如果开发人员提供了有参构造，且没有提供无参构造，则编译器不提供默认的无参构造，
即此时不能调用无参构造：point p;会报错：类 "point" 不存在默认构造函数
如果开发人员提供了拷贝构造，且没有提供无参构和有参构造，则编译器不提供普通构造，
即此时不能调用无参构造：point p;或者 point p(10,5); 会报错：类 "point" 不存在默认构造函数


*/
void constructor()
{
    /****括号法****/
    // //无参构造
    // point p1;
    // //有参构造
    // point p2(0, 10);
    // //拷贝构造
    // point p3(p2);

    //匿名对象：当前行执行完后，系统会立刻回收掉匿名对象（即创即销）
    point(10, 0);

    /****显式法****/
    //无参构造
    point p1;
    //有参构造
    point p2 = point(10, 5);
    //拷贝构造
    point p3 = point(p2);
    //注：不要用 拷贝构造函数 初始化 匿名对象
    //如：point(p2); 
    //此时编译会提示p2重定义，编译器会将point(p2);理解为 point p2;
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

/***拷贝构造使用时机***/
// 1.使用一个已经创建完毕的对象来初始化一个新的对象
void constructor_use_1()
{
    point p1(10, 5);
    point p2(p1);
    cout << p2.getx() << p2.gety() << endl;
}

// 2.值传递的方式给函数参数传参
void dowork_1(point p)
{

}
void constructor_use_2()
{
    point p1;
    dowork_1(p1);//此时p1是通过拷贝函数传参给dowork_1中的形参p的
}

//3.通过返回值的方式传递局部参数
point constructor_use_3()
{
    point p(10, 5);
    cout << "I'm Here!--------1\t" << (int *)&p << endl;
    return p;
}
void dowork_2()
{
    point p1 = constructor_use_3();//此处本应该调用拷贝构造函数，但因编译器优化，故只调用了一次构造和析构
    cout << "I'm Here!\t" << (int *)&p1 << endl;
    cout << p1.getx() << p1.gety()<<endl;
}

void isin(circle &c, point &p)
{
    int distance = (c.getp().getx() - p.getx()) * (c.getp().getx() - p.getx()) + 
                    (c.getp().gety() - p.gety()) * (c.getp().gety() - p.gety()) - c.getr() * c.getr();
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