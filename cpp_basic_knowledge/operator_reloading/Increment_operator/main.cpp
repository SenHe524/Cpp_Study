#include <iostream>
#include <string>
using namespace std;

//�������������

void test1();
void test2();

//���������ͬ������ʹ��friend����Ϊ��Ԫ�������Է���privat��Ա����
class myinteger
{
    friend ostream& operator<<(ostream &cout , myinteger p);
public:
    myinteger()
    {
        a = 0;
    }

    //ǰ��++���������
    myinteger& operator++()
    {
        a++;
        return *this;
    }
    //����++���������
    myinteger operator++(int)//ռλ����int����ʹ����������ǰ�û���õ���
    {
        myinteger a_temp = *this;
        a++;
        //ע��˴�����Ϊ�ֲ������������ �����<<�����в���ʹ�����ô�ֵ������40��
        //���ұ���������ֵҲ����ʹ���ã�����26��
        return a_temp;
    }

private:
    int a;
};
//ȫ�ֺ���ʵ���������������
//����ֵΪcout���ͣ�ostream ��������Ϊ��ʵ����ʽ���
ostream& operator<<(ostream &out , myinteger p)
{
    out << p.a ;
    return out;
}



void test1(){

    myinteger p1;

    cout << ++p1 << endl;
    cout << p1 << endl;
}
void test2(){

    myinteger p1;

    cout << p1++ << endl;
    cout << p1 << endl;

}

int main()
{
    test1();
    cout << endl;
    test2();
    system("pause");
    return 0;
} 