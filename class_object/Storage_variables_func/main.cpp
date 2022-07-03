#include <iostream>
#include <string>

using namespace std;
/*

*/

class p
{

};

class person
{
    int a; //非静态成员变量，属于类的对象
    static  int b; //静态成员变量 不属于类的对象，因此不参与类的存储空间统计

    void func(){} //非静态成员函数  不属于类的对象
    static void funcc(){} //静态成员函数，不属于类的对象
    //总结：只有非静态成员变量才属于类的对象，参与类的存储空间的统计
};

int main()
{
    //空对象 pp，所占内存为1；
    //C++编译器会给每个空对象分配一个字节的空间，用以区分空对象所占内存的位置
    p pp;
    cout << "Size of p = " << sizeof(pp) << endl;

    person ee;
    cout << "Size of p = " << sizeof(ee) << endl;

    system("pause");
    return 0;
}
