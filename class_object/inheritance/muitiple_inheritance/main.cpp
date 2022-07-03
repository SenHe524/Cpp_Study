#include <iostream>
#include <string>
using namespace std;



//子类可以继承多个父类(不建议使用)
//多继承可能会引发父类中出现同名成员（属性or函数），需要用作用域区分

class base1
{
public: //公共属性，类内类外均可访问
    base1()
    {
        a = 100;
        a1 = 100;
    }
    //同名成员属性
    int a;
    //不同名成员属性
    int a1;
};

class base2
{
public: //公共属性，类内类外均可访问
    base2()
    {
        a = 200;
        a2 = 200;
    }
    //同名成员属性
    int a;
    //不同名成员属性
    int a2;
};

class son : public base1, public base2
{
public:
    son()
    {
        a = 300;
        a3 = 300;
    }

    //同名成员属性
    int a;
    //不同命成员属性
    int a3;
};
void test()
{
    son s1;
    cout << "size of son = " << sizeof(s1) << endl;

    cout << s1.base1::a << endl;
    cout << s1.base2::a << endl;
    cout << s1.a << endl;
    cout << s1.a1 << endl;
    cout << s1.a2 << endl;
    cout << s1.a3 << endl;
}


int main()
{
    test();
    system("pause");
    return 0;
} 