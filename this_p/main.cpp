#include <iostream>
#include <string>

using namespace std;
/*
thisָ��:thisָ�򱻵��õĳ�Ա���������Ķ���
1.thisָ����������ÿһ���Ǿ�̬��Ա�����ڵ�һ��ָ��
2.thisָ�벻��Ҫ���壬ֱ��ʹ��

thisָ�����;��
1.���βκͳ�Ա����ͬ��ʱ��������thisָ������
2.����ķǾ�̬��Ա�������ض�����ʱ������ʹ�ã�return *this��
*/



class person
{
public:
    int a; //�Ǿ�̬��Ա������������Ķ���
    person(int a)
    {
        this->a = a;
    }

    person& per(person &p)
    {
        this->a += p.a; 
        return *this;
    }
    
};
void test01();
int main()
{
    test01();

    system("pause");
    return 0;
}

void test01()
{
    person p(2);
    cout << p.a << endl;

    person p1(11);
    person p2(10);
    //p2.per(p1)����ֵΪp2����˿����ں������׷�� .per(p1)��---��Ϊ��ʽ���
    ((p2.per(p1)).per(p1)).per(p1);
    cout << p2.a << endl;

}