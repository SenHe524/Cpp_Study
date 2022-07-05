#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/*
函数重载：通过形参的个数，顺序和类型去区分同名函数，提高函数名的复用性
注意:函数重载需要在同一作用域，函数名需要相同
*/


// 交换两个整形数据值
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << a << "   " << b << endl;
}
// 交换两个单精度浮点型数据值
void swap(float &a, float &b)
{
    float temp = a;
    a = b;
    b = temp;
    cout << a << "   " << b << endl;
}
// 交换两个双精度浮点型数据值
void swap(double &a, double &b)
{
    double temp = a;
    a = b;
    b = temp;
    cout << a << "   " << b << endl;
}
// 交换两个双精度浮点型数据值
void swap(const double &a, const double &b)
{
    cout << a << "   " << b << endl;
}
void test()
{
    int a = 5, b = 6;
    swap(a,b);

    swap(10.5, 12.8);

}
int main()
{
    test();
    system("pause");
    return 0;
}