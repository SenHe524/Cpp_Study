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

class base_info
{
public:
    void ba()
    {
        cout << "������Ϣ��" << endl;
    }
};
class java : public base_info
{
    public:
    void ja()
    {
        cout << "java��Ϣ��" << endl;
    }
};
class python : public base_info
{
    public:
    void py()
    {
        cout << "python��Ϣ��" << endl;
    }
};
class cpp : public base_info
{
    public:
    void cp()
    {
        cout << "c++��Ϣ��" << endl;
    }
};

void test(){
    java j;
    j.ba();
    j.ja();
    python p;
    p.ba();
    p.py();
    cpp c;
    c.ba();
    c.cp();

}

int main()
{
    test();
    system("pause");
    return 0;
} 