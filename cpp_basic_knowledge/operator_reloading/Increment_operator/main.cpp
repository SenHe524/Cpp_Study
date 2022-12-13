#include <iostream>
#include <string>
using namespace std;

//自增运算符重载

void test1();
void test2();

//运算符重载同样可以使用friend修饰为友元函数，以访问privat成员属性
class myinteger
{
    friend ostream& operator<<(ostream &cout , myinteger p);
public:
    myinteger()
    {
        a = 0;
    }

    //前置++运算符重载
    myinteger& operator++()
    {
        a++;
        return *this;
    }
    //后置++运算符重载
    myinteger operator++(int)//占位参数int可以使编译器区分前置或后置递增
    {
        myinteger a_temp = *this;
        a++;
        //注意此处返回为局部变量，因此在 运算符<<重载中不能使用引用传值，见第40行
        //并且本函数返回值也不能使引用，见第26行
        return a_temp;
    }

private:
    int a;
};
//全局函数实现左移运算符重载
//返回值为cout类型：ostream 的引用是为了实现链式编程
ostream& operator<<(ostream &out , myinteger p)
{
    out << p.a ;
    return out;
}



void test1(){

    myinteger p1;

    cout << ++p1 << endl;
    cout << p1 << endl;
}
void test2(){

    myinteger p1;

    cout << p1++ << endl;
    cout << p1 << endl;

}

int main()
{
    test1();
    cout << endl;
    test2();
    system("pause");
    return 0;
} 