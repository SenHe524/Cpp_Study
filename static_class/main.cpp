#include <iostream>
#include <string>

using namespace std;
/*
静态成员就是在成员变量或者成员函数之前加上关键字static

静态成员变量：
1.所有对象共享同一份数据
2.在编译阶段分配内存
3.类内声明，类外初始化
静态成员函数
1.所有对象共享同一个函数
2.静态成员函数只能访问静态成员变量

静态成员函数
1.所有对象共享一个函数
2.静态成员函数只能访问静态成员变量

*/

class person
{
public:
    static int m;//类内声明

    static void func()
    {
        n = 113;
        cout << "static void func" << endl;
    }
private:
    static int n;//类内声明
};
int person::m = 100;//类外初始化
int person::n = 111;//类外初始化

void test01();
void test02();
int main()
{
    // test01();
    test02();
    system("pause");
    return 0;
}

void test01()
{
    person p;
    person pp;
    cout << p.m << endl;
    pp.m = 122;
    cout << p.m << endl;//所有对象共享同一份数据
    p.func();
}

void test02()
{
    person p;
    cout << person::m << endl;
    p.func();
}