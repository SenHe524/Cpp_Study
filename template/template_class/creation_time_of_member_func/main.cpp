#include <iostream>
#include <string>
using namespace std;

// ��ģ���г�Ա��������ͨ���г�Ա��������ʱ��������
/*
    1. ��ͨ���еĳ�Ա����һ��ʼ�Ϳ��Դ���
    2. ��ģ���еĳ�Ա�����ڵ���ʱ����
*/

class person{
public:
    void showperson(){
        cout << "show person" << endl;
    }

};
class student{
public:
    void showstudent(){
        cout << "show student" << endl;
    }

};
template<class T> 
class myclass{
public:
    T obj;
    // ��ģ���еĳ�Ա����
    void func1(){
        obj.showperson();
    }
    void func2(){
        obj.showstudent();
    }
};

void test(){
    myclass<person> p1;// �ڴ���p1ʱ���ᱨ��func2����person�ĳ�Ա����
    myclass<student> p2;// �ڴ���p2ʱ���ᱨ��func1����showstudent�ĳ�Ա����

    // �ڵ���ʱ�Żᱨ��
    p1.func1();
    // p1.func2();// �˾��޷�����ͨ����func2����person�ĳ�Ա����
    // p2.func1();// �˾��޷�����ͨ����func1����showstudent�ĳ�Ա����
    p2.func2();


}

int main(void)
{
    test();

    system("pause");
    return 0;
}
