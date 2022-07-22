#include <iostream>
#include <string>
using namespace std;

// 类模板中成员函数和普通类中成员函数创建时机的区别：
/*
    1. 普通类中的成员函数一开始就可以创建
    2. 类模板中的成员函数在调用时创建
*/

class person{
public:
    void showperson(){
        cout << "show person" << endl;
    }

};
class student{
public:
    void showstudent(){
        cout << "show student" << endl;
    }

};
template<class T> 
class myclass{
public:
    T obj;
    // 类模板中的成员函数
    void func1(){
        obj.showperson();
    }
    void func2(){
        obj.showstudent();
    }
};

void test(){
    myclass<person> p1;// 在创建p1时不会报错：func2不是person的成员函数
    myclass<student> p2;// 在创建p2时不会报错：func1不是showstudent的成员函数

    // 在调用时才会报错
    p1.func1();
    // p1.func2();// 此句无法编译通过：func2不是person的成员函数
    // p2.func1();// 此句无法编译通过：func1不是showstudent的成员函数
    p2.func2();


}

int main(void)
{
    test();

    system("pause");
    return 0;
}
