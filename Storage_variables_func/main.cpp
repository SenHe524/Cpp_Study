#include <iostream>
#include <string>

using namespace std;
/*

*/

class p
{

};

class person
{
    int a; //�Ǿ�̬��Ա������������Ķ���
    static  int b; //��̬��Ա���� ��������Ķ�����˲�������Ĵ洢�ռ�ͳ��

    void func(){} //�Ǿ�̬��Ա����  ��������Ķ���
    static void funcc(){} //��̬��Ա��������������Ķ���
    //�ܽ᣺ֻ�зǾ�̬��Ա������������Ķ��󣬲�����Ĵ洢�ռ��ͳ��
};

int main()
{
    //�ն��� pp����ռ�ڴ�Ϊ1��
    //C++���������ÿ���ն������һ���ֽڵĿռ䣬�������ֿն�����ռ�ڴ��λ��
    p pp;
    cout << "Size of p = " << sizeof(pp) << endl;

    person ee;
    cout << "Size of p = " << sizeof(ee) << endl;

    system("pause");
    return 0;
}
