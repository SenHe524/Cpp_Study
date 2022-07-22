#include <iostream>
#include <string>
using namespace std;
// 类模板分文件编写

// 问题：类模板中成员函数创建时机时在调用阶段，导致文件编译时链接不到
// 解决方法：
// 方法1：直接包含.cpp源文件
#include "person1.cpp"
// 方法2：将声明和实现写到同一个文件中，并更改后缀为.hpp，hpp时约定的名称，并不是强制
//        即将.h和.cpp文件内容合并为 .hpp文件，然后包含.hpp
#include "person2.hpp"
void test1(){
    person1<string, int> p1("孙悟空",100);
    p1.showperson();
}
void test2(){
    person2<string, int> p2("猪八戒",100);
    p2.showperson();
}
int main(void)
{
    test1();
    test2();
    system("pause");
    return 0;
}
