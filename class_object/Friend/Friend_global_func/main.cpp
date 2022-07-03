#include <iostream>
#include <string>
using namespace std;

//全局函数做友元
class build
{
    //关键字friend 修饰全局函数声明，使得全局函数可以访问private成员属性
    friend void gd(build &b); 
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
void gd(build &b)
{
    cout << "全局函数访问： " << b.sittingroom << endl;
    cout << "全局函数访问： " << b.bedroom << endl;
}


int main()
{
    build b;
    gd(b);
    system("pause");
    return 0;
}