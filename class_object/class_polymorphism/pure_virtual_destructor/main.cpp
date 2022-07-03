#include <iostream>
#include <string>
using namespace std;



class base//������
{
public:
    //���麯��
    virtual void func() = 0;
    base()
    {
        cout << "Base ���캯��" << endl;
    }
    // virtual ~base()//����������:�������ָ���ͷ�������󲻸ɾ�������
    // {
    //     cout << "base ��������" << endl;
    // }
    
    //�����������д��������󣬴����޷�ʵ��������
    //ע������������Ҫ��������������ʵ��
    virtual ~base() = 0;
};
base::~base(){
    cout << "base ������������" << endl;
}
class cat : public base
{
public:
    cat(string name)
    {
        cout << "cat���캯��" << endl;
        this->name = new string(name);
    }
    ~cat()
    {
        if(name != NULL)
        {
            cout << "cat��������" << endl;
            delete name;
            name = NULL;
        }
    }
    void func()
    {
        cout << *name << "Сè˵����" << endl;
    }
    string *name;
};
class dog : public base
{
public:
    void func()
    {
        cout << "С��˵����" << endl;
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