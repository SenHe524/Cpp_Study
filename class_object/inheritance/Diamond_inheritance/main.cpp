#include <iostream>
#include <string>
using namespace std;



//���μ̳�
/*
        ��

    ��      ��

        ��
���µ����⣺����к���2�ݡ����������ݣ������ڴ��˷ѣ��һ������������
����취����̳�
�ڼ̳�֮ǰ��ӹؼ���:virtual
father:��ʱfather����Ϊ�����
class son1 : virtual public father
class son2 : virtual public father



*/
class father
{
public:
    int a;

};

class son1 : virtual public father
{
public:
    int a1;

};

class son2 : virtual public father
{
public:
    int a2;

};

class child : public son1,public son2
{
public:
    int a3;

};

void test()
{
    child c;
    c.a = 100;
    cout << c.a << endl;
}


int main()
{
    test();
    system("pause");
    return 0;
} 