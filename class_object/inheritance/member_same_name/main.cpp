#include <iostream>
#include <string>
using namespace std;



//子类继承父类后，若有同名成员，如何处理
// 访问子类成员，直接调用
// 访问父类成员，添加作用域再调用

class base
{
public: //公共属性，类内类外均可访问
    base()
    {
        a = 100;
    }

    //同名成员函数
    void func()
    {
        cout << "base_func" << endl;
    }

    void func(int b)
    {
        cout << "base_func(int b)" << endl;
    }

    //同名成员属性
    int a;
};

// 公共继承
class son : public base
{
public:
    son()
    {
        a = 200;
    }

    //同名成员函数
    void func()
    {
        cout << "son_func" << endl;
    }

    //同名成员属性
    int a;
};
void test()
{
    son s1;
    cout << "son 下的a = " << s1.a << endl; // 直接调用为子类
    // 通过子类访问父类中与子类同名成员属性，需要加作用域： base::
    cout << "base 下的a = " << s1.base::a << endl;
    // 成员函数与成员属性调用类似：加作用域base::
    s1.func();
    s1.base::func();
    /*
    注：当父类中有同名函数的重载时，要调用父类成员函数也必须添加作用域
    无法通过参数个数、返回值类型不同去区分调用子类函数还是父类函数
    原因：当出现同名函数时，父类所有同名函数都会被隐藏。只能通过添加作用域调用
    */
    // s1.func(100);//此时没有作用域，则报错
    s1.base::func(100); //有作用域后，无报错
}


int main()
{
    test();
    system("pause");
    return 0;
} 