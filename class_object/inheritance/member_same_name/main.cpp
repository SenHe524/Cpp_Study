#include <iostream>
#include <string>
using namespace std;



//����̳и��������ͬ����Ա����δ���
// ���������Ա��ֱ�ӵ���
// ���ʸ����Ա������������ٵ���

class base
{
public: //�������ԣ�����������ɷ���
    base()
    {
        a = 100;
    }

    //ͬ����Ա����
    void func()
    {
        cout << "base_func" << endl;
    }

    void func(int b)
    {
        cout << "base_func(int b)" << endl;
    }

    //ͬ����Ա����
    int a;
};

// �����̳�
class son : public base
{
public:
    son()
    {
        a = 200;
    }

    //ͬ����Ա����
    void func()
    {
        cout << "son_func" << endl;
    }

    //ͬ����Ա����
    int a;
};
void test()
{
    son s1;
    cout << "son �µ�a = " << s1.a << endl; // ֱ�ӵ���Ϊ����
    // ͨ��������ʸ�����������ͬ����Ա���ԣ���Ҫ�������� base::
    cout << "base �µ�a = " << s1.base::a << endl;
    // ��Ա�������Ա���Ե������ƣ���������base::
    s1.func();
    s1.base::func();
    /*
    ע������������ͬ������������ʱ��Ҫ���ø����Ա����Ҳ�������������
    �޷�ͨ����������������ֵ���Ͳ�ͬȥ���ֵ������ຯ�����Ǹ��ຯ��
    ԭ�򣺵�����ͬ������ʱ����������ͬ���������ᱻ���ء�ֻ��ͨ��������������
    */
    // s1.func(100);//��ʱû���������򱨴�
    s1.base::func(100); //����������ޱ���
}


int main()
{
    test();
    system("pause");
    return 0;
} 