#include <iostream>
#include <string>
using namespace std;

//��̬����-��������

/*
��̬�ŵ㣺
1.������֯�ṹ����
2.�ɶ���ǿ
3.���ں��ڵ���չ��ά��
��������Ҫ��չ���ܵ�ʱ�򣬲���ȥ�޸�֮ǰ���ƵĴ��룬ֻ��Ҫ��Ӵ���ͺ�
    ����Ҫά��֮ǰ����ʱ�������ݣ������֮������Բ�ǿ
*/

//��ͨд��
class calculator
{
public:

    int getresult(string oper)
    {
        if(oper == "+")
        {
            return num1 + num2;
        }
        else if(oper == "-")
        {
            return num1 - num2;
        }
        else if(oper == "*")
        {
            return num1 * num2;
        }
        else{
            return -1;
        }
    }

    int num1;
    int num2;
};
void test()
{
    calculator c;
    c.num1 = 15;
    c.num2 = 6;
    cout << c.getresult("+") << endl;
}

//���ö�̬ʵ�ּ�����

//ʵ�ּ�����������
class AbstractCalculator
{
public:
    virtual int get()
    {
        return 0;
    }
    virtual ~AbstractCalculator()
    {

    }
    int num1;
    int num2;
};

//�ӷ���������
class AddCal : public AbstractCalculator
{
public:
    int get()
    {
        return num1 + num2;
    }
};

//������������
class SubCal : public AbstractCalculator
{
public:
    int get()
    {
        return num1 - num2;
    }
};

//�˷���������
class MulCal : public AbstractCalculator
{
public:
    int get()
    {
        return num1 * num2;
    }
};

void test2(){
    AbstractCalculator *abc = new AddCal;
    abc->num1 = 15;
    abc->num2 = 45;
    cout << abc->get() << endl;
    delete abc;
    abc = new SubCal;
    abc->num1 = 15;
    abc->num2 = 45;
    cout << abc->get() << endl;
    delete abc;

}
int main()
{
    test2();
    system("pause");
    return 0;
}