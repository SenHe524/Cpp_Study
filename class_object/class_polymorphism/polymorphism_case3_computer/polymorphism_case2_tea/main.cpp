#include <iostream>
#include <string>
using namespace std;

//多态案例-制作电脑
/*
抽象步骤:
1.将一台电脑分解：cpu、显卡、内存（可以继续增加）
2.将上一步分解出来的各部分抽象成各自的类：cpu、videocard、memory，每个抽象类中将各自类的行为写为纯虚函数
3.针对每个抽象类写继承子类：cpu_inter、videocard_inter，子类中要写对父类的纯虚函数进行具体实现
4.用cpu、videocard、memory的抽象类去组成电脑：computer

*/


class cpu
{
public:

    //计算
    virtual void calculater() = 0;
    virtual ~cpu()
    {

    }
};
class videocard
{
public:

    //显示
    virtual void display() = 0;
    virtual ~videocard()
    {

    }
};
class memory
{
public:
    //存储
    virtual void storage() = 0;
    virtual ~memory()
    {
    }

};

class computer
{
public:
    computer(cpu *cp, videocard *vi, memory *me)
    {
        c = cp;
        v = vi;
        m = me;
    }
    void work()
    {
        c->calculater();
        v->display();
        m->storage();
    }
    ~computer(){
        if(c != NULL)
        {
            delete c;
            c = NULL;
        }
        if(v != NULL)
        {
            delete v;
            v = NULL;
        }
        if(m != NULL)
        {
            delete m;
            m = NULL;
        }
    }
private:
    cpu *c;
    videocard *v;
    memory *m;
};

class cpu_inter : public cpu
{
public:
    virtual void calculater()
    {
        cout << "inter 的cpu开始计算了！" << endl;
    }
};
class videocard_inter : public videocard
{
public:
    virtual void display()
    {
        cout << "inter 的显卡开始显示了！" << endl;
    }
};
class memory_inter : public memory
{
public:
    virtual void storage()
    {
        cout << "inter 的存储器开始存储了！" << endl;
    }
};

class cpu_len : public cpu
{
public:
    virtual void calculater()
    {
        cout << "len 的cpu开始计算了！" << endl;
    }
};
class video_len : public videocard
{
public:
    virtual void display()
    {
        cout << "len 的显卡开始显示了！" << endl;
    }
};
class memory_len : public memory
{
public:
    virtual void storage()
    {
        cout << "len 的存储器开始存储了！" << endl;
    }
};


void test()
{
    cpu * cpu_i = new cpu_len;
    videocard *vi_i = new video_len;
    memory *me_i = new memory_inter;
    computer *computer1 = new computer(cpu_i, vi_i, me_i);
    computer1->work();
    delete computer1;
}

int main()
{
    test();
    system("pause");
    return 0;
}