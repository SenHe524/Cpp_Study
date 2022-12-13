#include <iostream>
#include <string>
using namespace std;

//函数调用运算符（ 也即小括号() ）重载
//1.函数调用运算符重载后的使用非常像函数的使用，因此也称作仿函数

void test();


class myprint
{
public:
    //重载函数调用运算符
    void operator()(string text)
    {
        cout << text << endl;
    }

};

void test(){
    myprint my;
    my("hello world!");
    //匿名函数对象
    myprint()("匿名函数对象");

}

int main()
{
    test();
    system("pause");
    return 0;
} 