#include <iostream>
#include <string>

using namespace std;
/*
��̬��Ա�����ڳ�Ա�������߳�Ա����֮ǰ���Ϲؼ���static

��̬��Ա������
1.���ж�����ͬһ������
2.�ڱ���׶η����ڴ�
3.���������������ʼ��
��̬��Ա����
1.���ж�����ͬһ������
2.��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

��̬��Ա����
1.���ж�����һ������
2.��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

*/

class person
{
public:
    static int m;//��������

    static void func()
    {
        n = 113;
        cout << "static void func" << endl;
    }
private:
    static int n;//��������
};
int person::m = 100;//�����ʼ��
int person::n = 111;//�����ʼ��

void test01();
void test02();
int main()
{
    // test01();
    test02();
    system("pause");
    return 0;
}

void test01()
{
    person p;
    person pp;
    cout << p.m << endl;
    pp.m = 122;
    cout << p.m << endl;//���ж�����ͬһ������
    p.func();
}

void test02()
{
    person p;
    cout << person::m << endl;
    p.func();
}