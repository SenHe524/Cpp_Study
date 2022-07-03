#include <iostream>
#include <string>
using namespace std;

//类做友元
class build
{
    //关键字friend 修饰类声明，使得类可以访问private成员属性
    friend class goodgay; 
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

class goodgay
{
public:
    goodgay()
    {
        b = new build;
    }
    void visit()
    {
        cout << "Goodgay 正在访问" << b->sittingroom << endl;
        cout << "Goodgay 正在访问" << b->bedroom << endl;
    }
    build *b;
};



void gd(build &b)
{
//     cout << "全局函数访问： " << b.sittingroom << endl;
//     cout << "全局函数访问： " << b.bedroom << endl;
}


int main()
{
    goodgay g;
    g.visit();
    system("pause");
    return 0;
}