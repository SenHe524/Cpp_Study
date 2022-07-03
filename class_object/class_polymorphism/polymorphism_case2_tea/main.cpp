#include <iostream>
#include <string>
using namespace std;

//多态案例-制作饮品

class AbstractDrinking
{
public:
    virtual ~AbstractDrinking()
    {
        //虚析构函数
    }
    //烧水
    virtual void Boil() = 0;
    //冲泡
    virtual void Brew() = 0;
    //倒入杯中
    virtual void PutInCup() = 0;
    //加入辅料
    virtual void AddSomething() = 0;
    void make()
    {
        Boil();
        Brew();
        PutInCup();
        AddSomething();
    }

};
// 制作咖啡
class coffe : public AbstractDrinking
{
public:
    //烧水
    virtual void Boil(){
        cout << "coffe_水" << endl;
    }
    //冲泡
    virtual void Brew(){
        cout << "coffe_泡" << endl;
    }
    //倒入杯中
    virtual void PutInCup(){
        cout << "coffe_杯" << endl;
    }
    //加入辅料
    virtual void AddSomething()
    {
        cout << "coffe_料" << endl;
    }
};
// 制作茶叶
class tea : public AbstractDrinking
{
public:
    //烧水
    virtual void Boil(){
        cout << "tea_水" << endl;
    }
    //冲泡
    virtual void Brew(){
        cout << "tea_泡" << endl;
    }
    //倒入杯中
    virtual void PutInCup(){
        cout << "tea_杯" << endl;
    }
    //加入辅料
    virtual void AddSomething()
    {
        cout << "tea_料" << endl;
    }
};

void dowork(AbstractDrinking *abc)
{
    abc->make();
    delete abc;
}

void test()
{
    dowork(new tea);
}

int main()
{
    test();
    system("pause");
    return 0;
}