#include <iostream>
#include <string>
#include "object.h"
using namespace std;
//�����ǳ����
//ǳ����:�������ݵ�ַ���������Լ����������ַ�洢����
//��������������ڴ������ݣ��µ�ַ�뱻�������ݵ�ַ��ͬ
/*
������������ڶ������ٵģ��򿪷���һ��Ҫ�Լ��ṩ�������캯������ֹǳ���������������ظ��ͷ�����
*/
void test01();
int main()
{
    test01();
    system("pause");
    return 0;
}

void test01()
{
    point p1(10,5, 55);

    cout << p1.getx() << "\t" << p1.gety() << "\t" << *p1.h << endl;

    point p2(p1);

    cout << p2.getx() << "\t" << p2.gety() << "\t" << *p2.h << endl;
}