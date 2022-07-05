#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//模板局限性
/*
有些特定的数据类型，需要具体化方式做特殊实现
*/

class person{
public:
    person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    int age;
    string name;
};

template<typename T> // 声明一个模板。告诉编译器后面的代码紧跟这的T不要报错，T是一个通用数据类型
bool mycompare(T a,T b)
{
    if(a == b)
    return true;
    else
    return false;

}
template<> bool mycompare(person a,person b)// 声明一个模板。告诉编译器后面的代码紧跟这的T不要报错，T是一个通用数据类型
{
    if((a.name == b.name) && (a.age == b.age))
    {
        return true;
    }
    else{
        return false;
    }
}

void test1()
{
    int a = 10;
    int b = 50;
    int ret = mycompare(a,b);
    if(ret)
    {
        cout << "a = b" << endl;
    }
    else{
        cout << "a ! = b" << endl;
    }
}
void test2()
{
    person p1("Tom", 10);
    person p2("Tom", 10);

    int ret = mycompare(p1,p2);
    if(ret)
    {
        cout << "p1 = p2" << endl;
    }
    else{
        cout << "p1 ! = p2" << endl;
    }
}


int main()
{
    test1();
    test2();
    system("pause");
    return 0;
}