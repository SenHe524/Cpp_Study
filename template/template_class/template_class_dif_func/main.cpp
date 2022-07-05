#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//函数模板和类模板的区别
/*
1.类模板没有自动类型推导的使用方式，即必须显式指定参数类型
2.类模板在模板参数列表中可以有默认参数
*/

template<class NameType, class AgeType> 
class person{
public:
    person(NameType name, AgeType age)
    {
        this->name = name;
        this->age = age;
    }
    void showinfo()
    {
        cout << this->age << endl;
        cout << this->name << endl;
    }
    NameType name;
    AgeType age;
};
// 1.类模板没有自动类型推导的使用方式，即必须显式指定参数类型
void test1()
{
    // person p1("孙悟空", 1000); //报错:缺少 类模板 "person" 的参数列表
    person<string, int> p1("孙悟空", 1000);
    p1.showinfo();

}

// 2.类模板在模板参数列表中可以有默认参数
template<class NameType, class AgeType = int> 
class yaoguai{
public:
    yaoguai(NameType name, AgeType age)
    {
        this->name = name;
        this->age = age;
    }
    void showinfo()
    {
        cout << this->age << endl;
        cout << this->name << endl;
    }
    NameType name;
    AgeType age;
};
void test2()
{
    // 类yaoguai定义时，指定了AgeType的默认参数类型为int
    // 所以在定义时可以不指定AgeType的参数类型
    yaoguai<string> p2("猪八戒", 999);
    p2.showinfo();
}

int main()
{
    test1();
    test2();
    system("pause");
    return 0;
}