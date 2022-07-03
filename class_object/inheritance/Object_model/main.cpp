#include <iostream>
#include <string>
using namespace std;

//继承的方式：公共继承、保护继承、私有继承


//继承中的对象模型：继承父类而来的东西，有哪些是属于子类对象中的

class base
{
public: //公共属性，类内类外均可访问
    int a;
protected:  //保护属性，类内可以访问，类外无法访问
    int b;
private:    //私有属性，类内可以访问，类外无法访问
    int c;
};

// 公共继承
class son1 : public base
{
public:
    int sa;
};
// 保护继承
class son2 : protected base
{
public:
    void func()
    {
        
        a = 10;  // 父类中的公共权限成员 到子类中变为保护权限
        b = 100; // 父类中的保护权限成员 到子类中依然是保护权限
        // 父类中的私有权限成员 子类无法访问，即下一行无法通过编译
        // c = 100;
    }
};
// 私有继承
class son3 : private base
{
public:
    void func()
    {
        
        a = 10;  // 父类中的公共权限成员 到子类中变为私有权限
        b = 100; // 父类中的保护权限成员 到子类中变为私有权限
        // 父类中的私有权限成员 子类无法访问，即下一行无法通过编译
        // c = 100;
    }
};

void test()
{
    son1 s1;
    // 4？  12？ 16 ？
    cout << "size of = " << sizeof(s1) << endl;
    //结果为16，父类中所有的非静态成员属性都会被子类继承下去
    //父类中所有数据都会被子类继承，即便是私有成员属性也会被继承
    //父类私有成员属性无法被子类访问是由于编译器将其隐藏了
    
}


int main()
{
    test();
    system("pause");
    return 0;
} 