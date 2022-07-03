#include <iostream>
#include <string>
using namespace std;

//常函数
class person
{
public:
    //void showperson() 后添加const修饰关键字后，this->age = 100;会报错
    //this指针本质是指针常量，指针的指向不可修改
    //添加const后，可以理解为：const this：常量（指针常量），
    //即指针指向不可以修改，指针指向的数据也不能修改
    person():age(10),a(5)
    {

    }
    void showperson() const
    {
        // this->age = 100;
        //在定义变量时，加上mutable关键字修饰，便可以在常函数中修改
        this->a = 100;
    }

    int age;
    mutable int a;
};

//常对象
//常对象只能调用常函数，不能调用普通成员函数
void test01()
{
    const person p; //在对象前加const修饰，变为常对象
    // p.age = 100;//此句报错，即 p.age 无法修改
    p.a = 100; //此句因 a定义时有mutable关键字修饰，所以可以修改
}



int main()
{
    test01();

    system("pause");
    return 0;
}

