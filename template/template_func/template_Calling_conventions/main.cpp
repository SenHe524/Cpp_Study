#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//普通函数与函数模板的调用规则
/*
1.如果普通函数与函数模板都可以调用，优先调用函数模板
2.可以通过空模板参数列表强制调用函数模板
3.函数模板也可以发生函数重载
4.如果函数模板可以产生更好的匹配，优先调用函数模板

注:当提供了函数模板时，最好不要同时提供普通函数
*/


template<typename T> // 声明一个模板。告诉编译器后面的代码紧跟这的T不要报错，T是一个通用数据类型
void myprint(T a,T b)
{
    cout << "调用函数模板" <<  endl;

}
template<typename T> // 声明一个模板。告诉编译器后面的代码紧跟这的T不要报错，T是一个通用数据类型
void myprint(T a,T b, T c)
{
    cout << "调用重载的函数模板" <<  endl;

}

void myprint(int a,int b)
{
    cout << "调用普通函数" <<  endl;
}

template<typename T> // 声明一个模板。告诉编译器后面的代码紧跟这的T不要报错，T是一个通用数据类型
void myprint2(T a,T b)
{
    cout << "调用函数模板" <<  endl;

}

void myprint2(int a,int b);

void test()
{
    int a = 10;
    int b = 20;
    //1.如果普通函数与函数模板都可以调用，优先调用函数模板
    myprint(a, b);

    //2.可以通过空模板参数列表强制调用函数模板
    //此时无法编译下一行，因为普通函数只有声明没有实现，并且编译器此时不会调用函数模板
    // myprint2(a,b);
    // 通过空参数列表强制调用函数模板（当普通函数有具体实现时，也会调用函数模板）
    myprint2<>(a, b);

    // 3.函数模板也可以发生函数重载
    myprint(a,b, 10);

    // 4.如果函数模板可以产生更好的匹配，优先调用函数模板
    char ch1 = 'a';
    char ch2 = 'c';
    myprint(ch1, ch2);
}



int main()
{
    test();
    system("pause");
    return 0;
}