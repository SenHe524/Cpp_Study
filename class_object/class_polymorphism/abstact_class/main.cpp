#include <iostream>
#include <string>
using namespace std;

/*
�ڶ�̬�У�ͨ�������е��麯����ʵ���Ǻ�������ģ���˿��Խ��麯����Ϊ���麯��
���麯���﷨��virtual ����ֵ ������ (�����б�) = 0;
�������д��麯��������Ҳ����Ϊ��������
��������ص㣺
1.�������޷�ʵ��������
2.һ���������������࣬�������д�������еĴ��麯��������Ҳ���ڳ�����

*/

class base//������
{
public:
    //���麯��
    virtual void func() = 0;
    virtual ~base()
    {
        //����������
    };
};

class cat : public base
{
public:
    void func()
    {
        cout << "Сè˵����" << endl;
    }
};
class dog : public base
{
public:
    void func()
    {
        cout << "С��˵����" << endl;
    }
};
// ��ַ���  �ڱ���׶�ȷ��������ַ
void dospeak(base &a)
{
    a.func();
}

void test()
{
    cat c;
    dospeak(c);
    dog d;
    dospeak(d);
    
    base *b = new cat;
    dospeak(*b);
    delete b;
}

int main()
{
    test();
    system("pause");
    return 0;
}