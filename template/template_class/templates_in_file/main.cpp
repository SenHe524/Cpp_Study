#include <iostream>
#include <string>
using namespace std;
// ��ģ����ļ���д

// ���⣺��ģ���г�Ա��������ʱ��ʱ�ڵ��ý׶Σ������ļ�����ʱ���Ӳ���
// ���������
// ����1��ֱ�Ӱ���.cppԴ�ļ�
#include "person1.cpp"
// ����2����������ʵ��д��ͬһ���ļ��У������ĺ�׺Ϊ.hpp��hppʱԼ�������ƣ�������ǿ��
//        ����.h��.cpp�ļ����ݺϲ�Ϊ .hpp�ļ���Ȼ�����.hpp
#include "person2.hpp"
void test1(){
    person1<string, int> p1("�����",100);
    p1.showperson();
}
void test2(){
    person2<string, int> p2("��˽�",100);
    p2.showperson();
}
int main(void)
{
    test1();
    test2();
    system("pause");
    return 0;
}
