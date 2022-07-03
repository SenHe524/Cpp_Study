#include <iostream>
#include <string>

using namespace std;
/*
this指针:this指向被调用的成员函数所属的对象
1.this指针是隐含在每一个非静态成员函数内的一种指针
2.this指针不需要定义，直接使用

this指针的用途：
1.当形参和成员变量同名时，可以用this指针区分
2.在类的非静态成员函数返回对象本身时，可以使用：return *this；
*/



class person
{
public:
    int a; //非静态成员变量，属于类的对象
    person(int a)
    {
        this->a = a;
    }

    person& per(person &p)
    {
        this->a += p.a; 
        return *this;
    }
    
};
void test01();
int main()
{
    test01();

    system("pause");
    return 0;
}

void test01()
{
    person p(2);
    cout << p.a << endl;

    person p1(11);
    person p2(10);
    //p2.per(p1)返回值为p2，因此可以在后面继续追加 .per(p1)；---此为链式编程
    ((p2.per(p1)).per(p1)).per(p1);
    cout << p2.a << endl;

}