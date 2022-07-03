#include <iostream>
#include <string>
using namespace std;
//加减乘除运算符重载
//运算符重载也可以发生函数重载

void test();
class person
{
public:
    int a;
    int b;
    //成员函数实现加号运算符重载
    // person operator+(person &p)
    // {
    //     person p_temp;
    //     p_temp.a = this->a + p.a;
    //     p_temp.b = this->b + p.b;
    //     return p_temp;
    // }
    //成员函数实现减号运算符重载
    person operator-(person &p)
    {
        person p_temp;
        p_temp.a = this->a - p.a;
        p_temp.b = this->b - p.b;
        return p_temp;
    }
    //成员函数实现乘号运算符重载
    person operator*(person &p)
    {
        person p_temp;
        p_temp.a = this->a * p.a;
        p_temp.b = this->b * p.b;
        return p_temp;
    }
    //成员函数实现除号运算符重载
    person operator/(person &p)
    {
        person p_temp;
        p_temp.a = this->a / p.a;
        p_temp.b = this->b / p.b;
        return p_temp;
    }
};
//全局函数实现运算符重载
person operator+(person &p1, person &p2)
{
    person p_temp;
    p_temp.a = p1.a + p2.a;
    p_temp.b = p1.b + p2.b;
    return p_temp;
}
void test(){

    person p1;
    p1.a = 5;
    p1.b = 6;
    person p2;
    p2.a = 4;
    p2.b = 3;

    //成员函数
    person p3 = p1 + p2;
    cout << p3.a << "  " << p3.b << endl;
    // 全局函数
    person p7 = p1 + p2;
    cout << p7.a << "  "<< p7.b << endl;



    person p4 = p1 - p2;
    cout << p4.a << "  " << p4.b << endl;
    person p5 = p1 * p2;
    cout << p5.a << "  "<< p5.b << endl;
    person p6 = p1 / p2;
    cout << p6.a << "  "<< p6.b << endl;

    
}
int main()
{
    test();
    system("pause");
    return 0;
} 