#include <iostream>
#include <string>
using namespace std;

//�̳еķ�ʽ�������̳С������̳С�˽�м̳�


//�̳��еĶ���ģ�ͣ��̳и�������Ķ���������Щ��������������е�

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
    int sa;
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
    // 4��  12�� 16 ��
    cout << "size of = " << sizeof(s1) << endl;
    //���Ϊ16�����������еķǾ�̬��Ա���Զ��ᱻ����̳���ȥ
    //�������������ݶ��ᱻ����̳У�������˽�г�Ա����Ҳ�ᱻ�̳�
    //����˽�г�Ա�����޷���������������ڱ���������������
    
}


int main()
{
    test();
    system("pause");
    return 0;
} 