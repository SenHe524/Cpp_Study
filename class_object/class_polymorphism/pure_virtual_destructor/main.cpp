#include <iostream>
#include <string>
using namespace std;



class base//抽象类
{
public:
    //纯虚函数
    virtual void func() = 0;
    base()
    {
        cout << "Base 构造函数" << endl;
    }
    // virtual ~base()//虚析构函数:解决父类指针释放子类对象不干净的问题
    // {
    //     cout << "base 析构函数" << endl;
    // }
    
    //纯虚析构：有纯虚析构后，此类无法实例化对象
    //注：纯虚析构需要类内声明，类外实现
    virtual ~base() = 0;
};
base::~base(){
    cout << "base 纯虚析构调用" << endl;
}
class cat : public base
{
public:
    cat(string name)
    {
        cout << "cat构造函数" << endl;
        this->name = new string(name);
    }
    ~cat()
    {
        if(name != NULL)
        {
            cout << "cat析构函数" << endl;
            delete name;
            name = NULL;
        }
    }
    void func()
    {
        cout << *name << "小猫说话！" << endl;
    }
    string *name;
};
class dog : public base
{
public:
    void func()
    {
        cout << "小狗说话！" << endl;
    }
};

void test()
{
    base *b = new cat("Tom");
    b->func();
    delete b;
}

int main()
{
    test();
    system("pause");
    return 0;
}