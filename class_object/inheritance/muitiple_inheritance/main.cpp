#include <iostream>
#include <string>
using namespace std;



//������Լ̳ж������(������ʹ��)
//��̳п��ܻ����������г���ͬ����Ա������or����������Ҫ������������

class base1
{
public: //�������ԣ�����������ɷ���
    base1()
    {
        a = 100;
        a1 = 100;
    }
    //ͬ����Ա����
    int a;
    //��ͬ����Ա����
    int a1;
};

class base2
{
public: //�������ԣ�����������ɷ���
    base2()
    {
        a = 200;
        a2 = 200;
    }
    //ͬ����Ա����
    int a;
    //��ͬ����Ա����
    int a2;
};

class son : public base1, public base2
{
public:
    son()
    {
        a = 300;
        a3 = 300;
    }

    //ͬ����Ա����
    int a;
    //��ͬ����Ա����
    int a3;
};
void test()
{
    son s1;
    cout << "size of son = " << sizeof(s1) << endl;

    cout << s1.base1::a << endl;
    cout << s1.base2::a << endl;
    cout << s1.a << endl;
    cout << s1.a1 << endl;
    cout << s1.a2 << endl;
    cout << s1.a3 << endl;
}


int main()
{
    test();
    system("pause");
    return 0;
} 