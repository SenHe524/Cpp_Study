#include <iostream>
#include <string>
using namespace std;

//类做友元
class build;
class goodgay;

class goodgay
{
public:
    goodgay();
    // ~goodgay();
    void visit1();
    void visit2();
    build *b;
};

class build
{
    //关键字friend 修饰类声明，使得类可以访问private成员属性
    friend void goodgay::visit1(); 
public:
    build()
    {
        sittingroom = "客厅";
        bedroom = "卧室";
    }
    string sittingroom;
private:
    string bedroom;
};
goodgay::goodgay()
{
    b = new build;
}
void goodgay::visit1()
{
    cout << "Goodgay 正在访问" << b->sittingroom << endl;
    cout << "Goodgay 正在访问" << b->bedroom << endl;
}
void goodgay::visit2()
{
    cout << "Goodgay 正在访问" << b->sittingroom << endl;
    // cout << "Goodgay 正在访问" << b->bedroom << endl;
}

int main()
{
    goodgay g;
    g.visit1();
    system("pause");
    return 0;
}