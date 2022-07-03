#include <iostream>
#include <string>
using namespace std;

//多态是C++面向对象三大特性(封装、继承、多态)之一
/*
静态多态：函数重载和运算符重载属于静态多态，复用函数名
动态多态：派生类和虚函数实现运行时多态

静态多态和动态多态的区别：
静态多态的函数地址早绑定-编译阶段确定函数地址
动态多态的函数地址晚绑定-运行阶段确定函数地址

动态多态满足条件：
1.有继承关系（如以下：anmial-cat）
2.子类中要重写父类虚函数(即父类中的函数需要加virtual关键字将其变为虚函数)
重写：返回值类型 函数名 参数列表  全相同称作重写
注：将父类中的函数变为虚函数之后，需要开发者自己提供虚析构函数，
否则当使用new关键字在堆区创建由基类派生的类之后，
调用delete关键字删除堆区数据时会出现删除数据不完整的情况
见：https://blog.csdn.net/wanlijunjun/article/details/53606352


动态多态的调用：
父类的指针或者引用：如下函数声明，参数列表为animal(父类)的引用
void dospeak(animal &a)
{
    a.speak();
}
//执行子类对象
void test()
{
    cat c;
    dospeak(c);//使用的时候传入的是cat(子类)
}

*/

class animal
{
public:
    virtual void speak()
    {
        cout << "动物说话！" << endl;
    }
};

class cat : public animal
{
public:
    void speak()
    {
        cout << "小猫说话！" << endl;
    }
};
// 地址早绑定  在编译阶段确定函数地址
void dospeak(animal &a)
{
    a.speak();
}

void test()
{
    cat c;
    dospeak(c);
}

int main()
{
    test();
    system("pause");
    return 0;
}