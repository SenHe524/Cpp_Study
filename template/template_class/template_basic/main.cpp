#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/*
类模板：建立一个通用类，类中的成员、数据类型可以不做指定，用一个虚拟的类型来代表
grammar：
template<typename T>
类

*/
//类模板
template<class NameType, class AgeType> 
class person{
public:
    person(NameType name, AgeType age)
    {
        this->name = name;
        this->age = age;
    }
    NameType name;
    AgeType age;
};

void test()
{
    person<string, int> p1("孙悟空", 1000);
    cout << p1.age << p1.name << endl;
}

int main()
{
    test();
    system("pause");
    return 0;
}