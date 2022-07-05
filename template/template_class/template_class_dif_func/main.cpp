#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//����ģ�����ģ�������
/*
1.��ģ��û���Զ������Ƶ���ʹ�÷�ʽ����������ʽָ����������
2.��ģ����ģ������б��п�����Ĭ�ϲ���
*/

template<class NameType, class AgeType> 
class person{
public:
    person(NameType name, AgeType age)
    {
        this->name = name;
        this->age = age;
    }
    void showinfo()
    {
        cout << this->age << endl;
        cout << this->name << endl;
    }
    NameType name;
    AgeType age;
};
// 1.��ģ��û���Զ������Ƶ���ʹ�÷�ʽ����������ʽָ����������
void test1()
{
    // person p1("�����", 1000); //����:ȱ�� ��ģ�� "person" �Ĳ����б�
    person<string, int> p1("�����", 1000);
    p1.showinfo();

}

// 2.��ģ����ģ������б��п�����Ĭ�ϲ���
template<class NameType, class AgeType = int> 
class yaoguai{
public:
    yaoguai(NameType name, AgeType age)
    {
        this->name = name;
        this->age = age;
    }
    void showinfo()
    {
        cout << this->age << endl;
        cout << this->name << endl;
    }
    NameType name;
    AgeType age;
};
void test2()
{
    // ��yaoguai����ʱ��ָ����AgeType��Ĭ�ϲ�������Ϊint
    // �����ڶ���ʱ���Բ�ָ��AgeType�Ĳ�������
    yaoguai<string> p2("��˽�", 999);
    p2.showinfo();
}

int main()
{
    test1();
    test2();
    system("pause");
    return 0;
}