#include <iostream>
#include <string>
using namespace std;

//��ļ̳У������ظ�������
//�﷨�� 
// class ����: �̳з�ʽ ����{
//
// }
// ���� Ҳ��Ϊ ������
// ���� Ҳ��Ϊ ����

//�̳еķ�ʽ�������̳С������̳С�˽�м̳�


class base
{
public: //�������ԣ�����������ɷ���
    int a;
protected:  //�������ԣ����ڿ��Է��ʣ������޷�����
    int b;
private:    //˽�����ԣ����ڿ��Է��ʣ������޷�����
    int c;
};

// �����̳�
class son1 : public base
{
public:
    void func()
    {
        a = 10;  // �����еĹ���Ȩ�޳�Ա ����������Ȼ�ǹ���Ȩ��
        b = 100; // �����еı���Ȩ�޳�Ա ����������Ȼ�Ǳ���Ȩ��
        // �����е�˽��Ȩ�޳�Ա �����޷����ʣ�����һ���޷�ͨ������
        // c = 100;
    }
};
// �����̳�
class son2 : protected base
{
public:
    void func()
    {
        
        a = 10;  // �����еĹ���Ȩ�޳�Ա �������б�Ϊ����Ȩ��
        b = 100; // �����еı���Ȩ�޳�Ա ����������Ȼ�Ǳ���Ȩ��
        // �����е�˽��Ȩ�޳�Ա �����޷����ʣ�����һ���޷�ͨ������
        // c = 100;
    }
};
// ˽�м̳�
class son3 : private base
{
public:
    void func()
    {
        
        a = 10;  // �����еĹ���Ȩ�޳�Ա �������б�Ϊ˽��Ȩ��
        b = 100; // �����еı���Ȩ�޳�Ա �������б�Ϊ˽��Ȩ��
        // �����е�˽��Ȩ�޳�Ա �����޷����ʣ�����һ���޷�ͨ������
        // c = 100;
    }
};

void test()
{
    son1 s1;
    s1.a = 11;
    // s1.b = 111;// �����е�b�Ǳ���Ȩ�ޣ������޷�����

    son2 s2;
    // s2.a = 100; // �ڱ����̳е������У�����Ĺ�������aҲ��Ϊ�������ԣ������޷�����

    son3 s3;
    // s3.a = 100;// ��˽�м̳е������У�����Ĺ�������aҲ��Ϊ˽�����ԣ������޷�����
}


int main()
{
    test();
    system("pause");
    return 0;
} 