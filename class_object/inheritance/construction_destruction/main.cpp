#include <iostream>
#include <string>
using namespace std;



//����̳и���󣬴�������ʱ������������Ĵ���˳��


class base
{
public: //�������ԣ�����������ɷ���
    base()
    {
        cout << "base �Ĺ��캯��"  << endl;
    }
    ~base()
    {
        cout << "base ����������"  << endl;
    }
};

// �����̳�
class son1 : public base
{
public:
    son1()
    {
        cout << "son1 �Ĺ��캯��"  << endl;
    }
    ~son1()
    {
        cout << "son1 ����������"  << endl;
    }
};
void test()
{
    son1 s1;
    // ����˳�����£��ȸ��࣬������
    // ����˳�����£������࣬�ٸ���
}


int main()
{
    test();
    system("pause");
    return 0;
} 