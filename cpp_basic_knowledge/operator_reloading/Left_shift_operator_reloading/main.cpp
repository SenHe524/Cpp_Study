#include <iostream>
#include <string>
using namespace std;
//�������������

void test1();
void test2();
class person
{
public:
    int a;
    int b;
};
//ȫ�ֺ���ʵ�����������
ostream& operator<<(ostream &cout , person &p)
{//�˴����Խ�cout��Ϊout���������֣������Ǹ�coutȡ�˱���
    cout << "a = " << p.a << " b = " << p.b;
    return cout;
}

void test1(){

    person p1;
    p1.a = 5;
    p1.b = 6;
    

    person p3 = p1;
    cout << p3 << endl;

    
}

//���������ͬ������ʹ��friend����Ϊ��Ԫ�������Է���privat��Ա����
class point
{
    friend ostream& operator<<(ostream &cout , point &p);
public:
    point(int a_temp, int b_temp):a(a_temp),b(b_temp)
    {

    }
private:
    int a;
    int b;
};
//ȫ�ֺ���ʵ�����������
ostream& operator<<(ostream &out , point &p)
{
    out << "a = " << p.a << " b = " << p.b;
    return out;
}

void test2(){

    point p1(14, 6);
    

    point p3 = p1;
    cout << p3 << endl;

}

int main()
{
    test1();
    test2();
    system("pause");
    return 0;
} 