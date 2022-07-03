#include <iostream>
#include <string>
using namespace std;

//��̬����-��������
/*
������:
1.��һ̨���Էֽ⣺cpu���Կ����ڴ棨���Լ������ӣ�
2.����һ���ֽ�����ĸ����ֳ���ɸ��Ե��ࣺcpu��videocard��memory��ÿ���������н����������ΪдΪ���麯��
3.���ÿ��������д�̳����ࣺcpu_inter��videocard_inter��������Ҫд�Ը���Ĵ��麯�����о���ʵ��
4.��cpu��videocard��memory�ĳ�����ȥ��ɵ��ԣ�computer

*/


class cpu
{
public:

    //����
    virtual void calculater() = 0;
    virtual ~cpu()
    {

    }
};
class videocard
{
public:

    //��ʾ
    virtual void display() = 0;
    virtual ~videocard()
    {

    }
};
class memory
{
public:
    //�洢
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
        cout << "inter ��cpu��ʼ�����ˣ�" << endl;
    }
};
class videocard_inter : public videocard
{
public:
    virtual void display()
    {
        cout << "inter ���Կ���ʼ��ʾ�ˣ�" << endl;
    }
};
class memory_inter : public memory
{
public:
    virtual void storage()
    {
        cout << "inter �Ĵ洢����ʼ�洢�ˣ�" << endl;
    }
};

class cpu_len : public cpu
{
public:
    virtual void calculater()
    {
        cout << "len ��cpu��ʼ�����ˣ�" << endl;
    }
};
class video_len : public videocard
{
public:
    virtual void display()
    {
        cout << "len ���Կ���ʼ��ʾ�ˣ�" << endl;
    }
};
class memory_len : public memory
{
public:
    virtual void storage()
    {
        cout << "len �Ĵ洢����ʼ�洢�ˣ�" << endl;
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