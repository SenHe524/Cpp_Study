#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/*
C++两种编程思想：面向对象编程，泛型编程。其中泛型编程主要利用的技术是模板
C++提供两种模板技术：函数模板和类模板
函数模板：建立一个通用函数，其函数返回值类型和形参类型可以不用具体制定
用一个虚拟的类型来代表
*/
/*
grammar：
template<typename T>
函数声明或定义
*/
//函数模板
// 声明一个模板。告诉编译器后面的代码紧跟这的T不要报错，T是一个通用数据类型
template<typename T>
void myswap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
    cout << a << "   " << b << endl;
}

// 交换两个整形数据值
// void swap(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// 交换两个浮点型数据值
// void swap(double &a, double &b)
// {
//     double temp = a;
//     a = b;
//     b = temp;
//     cout << a << "  double  " << b << endl;
// }
void test()
{
    int a = 5, b = 9;
    // 利用函数模板交换
    // 1.自动类型推导
    myswap(a, b);
    // 2.显式指定类型
    myswap<int>(a, b);
    double a1 = 5.6, b1 = 9.8;
    // 利用函数模板交换
    // 1.自动类型推导
    myswap(a1, b1);
    // 2.显式指定类型
    myswap<double>(a1, b1);

}

/*
// 函数模板注意事项
1.自动类型推导，必须推导出一致的数据类型才能使用
2.从1可以推出：
        自动类型推导函数模板不会进行隐式类型转换
        显式指定类型函数模板会进行隐式类型转换
3.模板必须确定T的数据类型才可以使用
*/


template<typename T> // 声明一个模板。告诉编译器后面的代码紧跟这的T不要报错，T是一个通用数据类型
void func()
{
    cout << "   " << endl;
}

void test1()
{
    int a = 5, b = 9;
    char d = 'd';
    myswap(a, b);
    // 注意事项1.
    // myswap(a,d); // 报错！
    // 注意事项3.
    // func();//报错！
    func<int>();

}


int main()
{
    // test();
    test1();
    system("pause");
    return 0;
}