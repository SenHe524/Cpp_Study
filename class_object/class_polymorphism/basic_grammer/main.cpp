#include <iostream>
#include <string>
using namespace std;

//��̬��C++���������������(��װ���̳С���̬)֮һ
/*
��̬��̬���������غ�������������ھ�̬��̬�����ú�����
��̬��̬����������麯��ʵ������ʱ��̬

��̬��̬�Ͷ�̬��̬������
��̬��̬�ĺ�����ַ���-����׶�ȷ��������ַ
��̬��̬�ĺ�����ַ���-���н׶�ȷ��������ַ

��̬��̬����������
1.�м̳й�ϵ�������£�anmial-cat��
2.������Ҫ��д�����麯��(�������еĺ�����Ҫ��virtual�ؼ��ֽ����Ϊ�麯��)
��д������ֵ���� ������ �����б�  ȫ��ͬ������д
ע���������еĺ�����Ϊ�麯��֮����Ҫ�������Լ��ṩ������������
����ʹ��new�ؼ����ڶ��������ɻ�����������֮��
����delete�ؼ���ɾ����������ʱ�����ɾ�����ݲ����������
����https://blog.csdn.net/wanlijunjun/article/details/53606352


��̬��̬�ĵ��ã�
�����ָ��������ã����º��������������б�Ϊanimal(����)������
void dospeak(animal &a)
{
    a.speak();
}
//ִ���������
void test()
{
    cat c;
    dospeak(c);//ʹ�õ�ʱ�������cat(����)
}

*/

class animal
{
public:
    virtual void speak()
    {
        cout << "����˵����" << endl;
    }
};

class cat : public animal
{
public:
    void speak()
    {
        cout << "Сè˵����" << endl;
    }
};
// ��ַ���  �ڱ���׶�ȷ��������ַ
void dospeak(animal &a)
{
    a.speak();
}

void test()
{
    cat c;
    dospeak(c);
}

int main()
{
    test();
    system("pause");
    return 0;
}