#include <iostream>
#include <string>
using namespace std;

//������
class person
{
public:
    //void showperson() �����const���ιؼ��ֺ�this->age = 100;�ᱨ��
    //thisָ�뱾����ָ�볣����ָ���ָ�򲻿��޸�
    //���const�󣬿������Ϊ��const this��������ָ�볣������
    //��ָ��ָ�򲻿����޸ģ�ָ��ָ�������Ҳ�����޸�
    person():age(10),a(5)
    {

    }
    void showperson() const
    {
        // this->age = 100;
        //�ڶ������ʱ������mutable�ؼ������Σ�������ڳ��������޸�
        this->a = 100;
    }

    int age;
    mutable int a;
};

//������
//������ֻ�ܵ��ó����������ܵ�����ͨ��Ա����
void test01()
{
    const person p; //�ڶ���ǰ��const���Σ���Ϊ������
    // p.age = 100;//�˾䱨���� p.age �޷��޸�
    p.a = 100; //�˾��� a����ʱ��mutable�ؼ������Σ����Կ����޸�
}



int main()
{
    test01();

    system("pause");
    return 0;
}

