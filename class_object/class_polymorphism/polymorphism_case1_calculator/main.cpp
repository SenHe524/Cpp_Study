#include <iostream>
#include <string>
using namespace std;

//多态案例-计算器类

/*
多态优点：
1.代码组织结构清晰
2.可读性强
3.利于后期的扩展及维护
即：当需要扩展功能的时候，不用去修改之前完善的代码，只需要添加代码就好
    当需要维护之前代码时，方便快捷，程序块之间耦合性不强
*/

//普通写法
class calculator
{
public:

    int getresult(string oper)
    {
        if(oper == "+")
        {
            return num1 + num2;
        }
        else if(oper == "-")
        {
            return num1 - num2;
        }
        else if(oper == "*")
        {
            return num1 * num2;
        }
        else{
            return -1;
        }
    }

    int num1;
    int num2;
};
void test()
{
    calculator c;
    c.num1 = 15;
    c.num2 = 6;
    cout << c.getresult("+") << endl;
}

//利用多态实现计算器

//实现计算器抽象类
class AbstractCalculator
{
public:
    virtual int get()
    {
        return 0;
    }
    virtual ~AbstractCalculator()
    {

    }
    int num1;
    int num2;
};

//加法计算器类
class AddCal : public AbstractCalculator
{
public:
    int get()
    {
        return num1 + num2;
    }
};

//减法计算器类
class SubCal : public AbstractCalculator
{
public:
    int get()
    {
        return num1 - num2;
    }
};

//乘法计算器类
class MulCal : public AbstractCalculator
{
public:
    int get()
    {
        return num1 * num2;
    }
};

void test2(){
    AbstractCalculator *abc = new AddCal;
    abc->num1 = 15;
    abc->num2 = 45;
    cout << abc->get() << endl;
    delete abc;
    abc = new SubCal;
    abc->num1 = 15;
    abc->num2 = 45;
    cout << abc->get() << endl;
    delete abc;

}
int main()
{
    test2();
    system("pause");
    return 0;
}