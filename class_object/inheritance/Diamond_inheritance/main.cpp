#include <iostream>
#include <string>
using namespace std;



//菱形继承
/*
        父

    子      子

        孙
导致的问题：“孙”中含有2份“父”的数据，导致内存浪费，且会出现数据歧义
解决办法：虚继承
在继承之前添加关键字:virtual
father:此时father被称为虚基类
class son1 : virtual public father
class son2 : virtual public father



*/
class father
{
public:
    int a;

};

class son1 : virtual public father
{
public:
    int a1;

};

class son2 : virtual public father
{
public:
    int a2;

};

class child : public son1,public son2
{
public:
    int a3;

};

void test()
{
    child c;
    c.a = 100;
    cout << c.a << endl;
}


int main()
{
    test();
    system("pause");
    return 0;
} 