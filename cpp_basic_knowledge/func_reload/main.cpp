#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/*
�������أ�ͨ���βεĸ�����˳�������ȥ����ͬ����������ߺ������ĸ�����
ע��:����������Ҫ��ͬһ�����򣬺�������Ҫ��ͬ
*/


// ����������������ֵ
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << a << "   " << b << endl;
}
// �������������ȸ���������ֵ
void swap(float &a, float &b)
{
    float temp = a;
    a = b;
    b = temp;
    cout << a << "   " << b << endl;
}
// ��������˫���ȸ���������ֵ
void swap(double &a, double &b)
{
    double temp = a;
    a = b;
    b = temp;
    cout << a << "   " << b << endl;
}
// ��������˫���ȸ���������ֵ
void swap(const double &a, const double &b)
{
    cout << a << "   " << b << endl;
}
void test()
{
    int a = 5, b = 6;
    swap(a,b);

    swap(10.5, 12.8);

}
int main()
{
    test();
    system("pause");
    return 0;
}