#include <iostream>
#include <string>
#include "object.h"
using namespace std;
//深拷贝与浅拷贝
//浅拷贝:拷贝数据地址，而不是自己重新申请地址存储数据
//深拷贝：单独开辟内存存放数据，新地址与被拷贝数据地址不同
/*
如果有属性是在堆区开辟的，则开发者一定要自己提供拷贝构造函数，防止浅拷贝带来的数据重复释放问题
*/
void test01();
int main()
{
    test01();
    system("pause");
    return 0;
}

void test01()
{
    point p1(10,5, 55);

    cout << p1.getx() << "\t" << p1.gety() << "\t" << *p1.h << endl;

    point p2(p1);

    cout << p2.getx() << "\t" << p2.gety() << "\t" << *p2.h << endl;
}