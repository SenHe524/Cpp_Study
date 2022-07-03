#include <iostream>
#include <string>
using namespace std;



//子类继承父类后，创建子类时，父类与子类的创建顺序


class base
{
public: //公共属性，类内类外均可访问
    base()
    {
        cout << "base 的构造函数"  << endl;
    }
    ~base()
    {
        cout << "base 的析构函数"  << endl;
    }
};

// 公共继承
class son1 : public base
{
public:
    son1()
    {
        cout << "son1 的构造函数"  << endl;
    }
    ~son1()
    {
        cout << "son1 的析构函数"  << endl;
    }
};
void test()
{
    son1 s1;
    // 构造顺序如下：先父类，再子类
    // 析构顺序如下：先子类，再父类
}


int main()
{
    test();
    system("pause");
    return 0;
} 