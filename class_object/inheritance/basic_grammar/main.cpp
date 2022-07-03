#include <iostream>
#include <string>
using namespace std;

//类的继承：减少重复代码量
//语法： 
// class 子类: 继承方式 父类{
//
// }
// 子类 也称为 派生类
// 父类 也称为 基类

class base_info
{
public:
    void ba()
    {
        cout << "公共信息！" << endl;
    }
};
class java : public base_info
{
    public:
    void ja()
    {
        cout << "java信息！" << endl;
    }
};
class python : public base_info
{
    public:
    void py()
    {
        cout << "python信息！" << endl;
    }
};
class cpp : public base_info
{
    public:
    void cp()
    {
        cout << "c++信息！" << endl;
    }
};

void test(){
    java j;
    j.ba();
    j.ja();
    python p;
    p.ba();
    p.py();
    cpp c;
    c.ba();
    c.cp();

}

int main()
{
    test();
    system("pause");
    return 0;
} 