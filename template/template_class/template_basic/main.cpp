#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/*
��ģ�壺����һ��ͨ���࣬���еĳ�Ա���������Ϳ��Բ���ָ������һ�����������������
grammar��
template<typename T>
��

*/
//��ģ��
template<class NameType, class AgeType> 
class person{
public:
    person(NameType name, AgeType age)
    {
        this->name = name;
        this->age = age;
    }
    NameType name;
    AgeType age;
};

void test()
{
    person<string, int> p1("�����", 1000);
    cout << p1.age << p1.name << endl;
}

int main()
{
    test();
    system("pause");
    return 0;
}