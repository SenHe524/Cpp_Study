#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/*
C++���ֱ��˼�룺��������̣����ͱ�̡����з��ͱ����Ҫ���õļ�����ģ��
C++�ṩ����ģ�弼��������ģ�����ģ��
����ģ�壺����һ��ͨ�ú������亯������ֵ���ͺ��β����Ϳ��Բ��þ����ƶ�
��һ�����������������
*/
/*
grammar��
template<typename T>
������������
*/
//����ģ��
// ����һ��ģ�塣���߱���������Ĵ���������T��Ҫ����T��һ��ͨ����������
template<typename T>
void myswap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
    cout << a << "   " << b << endl;
}

// ����������������ֵ
// void swap(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// ������������������ֵ
// void swap(double &a, double &b)
// {
//     double temp = a;
//     a = b;
//     b = temp;
//     cout << a << "  double  " << b << endl;
// }
void test()
{
    int a = 5, b = 9;
    // ���ú���ģ�彻��
    // 1.�Զ������Ƶ�
    myswap(a, b);
    // 2.��ʽָ������
    myswap<int>(a, b);
    double a1 = 5.6, b1 = 9.8;
    // ���ú���ģ�彻��
    // 1.�Զ������Ƶ�
    myswap(a1, b1);
    // 2.��ʽָ������
    myswap<double>(a1, b1);

}

/*
// ����ģ��ע������
1.�Զ������Ƶ��������Ƶ���һ�µ��������Ͳ���ʹ��
2.��1�����Ƴ���
        �Զ������Ƶ�����ģ�岻�������ʽ����ת��
        ��ʽָ�����ͺ���ģ��������ʽ����ת��
3.ģ�����ȷ��T���������Ͳſ���ʹ��
*/


template<typename T> // ����һ��ģ�塣���߱���������Ĵ���������T��Ҫ����T��һ��ͨ����������
void func()
{
    cout << "   " << endl;
}

void test1()
{
    int a = 5, b = 9;
    char d = 'd';
    myswap(a, b);
    // ע������1.
    // myswap(a,d); // ����
    // ע������3.
    // func();//����
    func<int>();

}


int main()
{
    // test();
    test1();
    system("pause");
    return 0;
}