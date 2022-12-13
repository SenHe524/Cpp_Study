#include <iostream>
#include <string>
using namespace std;

/*
在多态中，通常父类中的虚函数的实现是毫无意义的，因此可以将虚函数改为纯虚函数
纯虚函数语法：virtual 返回值 函数名 (参数列表) = 0;
当类中有纯虚函数，此类也被称为：抽象类
抽象类的特点：
1.抽象类无法实例化对象
2.一个类若包含抽象类，则必须重写抽象类中的纯虚函数，否则也属于抽象类

*/

class base//抽象类
{
public:
    //纯虚函数
    virtual void func() = 0;
    virtual ~base()
    {
        //虚析构函数
    };
};

class cat : public base
{
public:
    void func()
    {
        cout << "小猫说话！" << endl;
    }
};
class dog : public base
{
public:
    void func()
    {
        cout << "小狗说话！" << endl;
    }
};
// 地址早绑定  在编译阶段确定函数地址
void dospeak(base &a)
{
    a.func();
}

void test()
{
    cat c;
    dospeak(c);
    dog d;
    dospeak(d);
    
    base *b = new cat;
    dospeak(*b);
    delete b;
}

int main()
{
    test();
    system("pause");
    return 0;
}