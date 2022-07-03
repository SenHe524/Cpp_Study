#include <iostream>
#include <string>
using namespace std;
//左移运算符重载

void test1();
void test2();
class person
{
public:
    int a;
    int b;
};
//全局函数实现运算符重载
ostream& operator<<(ostream &cout , person &p)
{//此处可以将cout改为out或其他名字，本质是给cout取了别名
    cout << "a = " << p.a << " b = " << p.b;
    return cout;
}

void test1(){

    person p1;
    p1.a = 5;
    p1.b = 6;
    

    person p3 = p1;
    cout << p3 << endl;

    
}

//运算符重载同样可以使用friend修饰为友元函数，以访问privat成员属性
class point
{
    friend ostream& operator<<(ostream &cout , point &p);
public:
    point(int a_temp, int b_temp):a(a_temp),b(b_temp)
    {

    }
private:
    int a;
    int b;
};
//全局函数实现运算符重载
ostream& operator<<(ostream &out , point &p)
{
    out << "a = " << p.a << " b = " << p.b;
    return out;
}

void test2(){

    point p1(14, 6);
    

    point p3 = p1;
    cout << p3 << endl;

}

int main()
{
    test1();
    test2();
    system("pause");
    return 0;
} 