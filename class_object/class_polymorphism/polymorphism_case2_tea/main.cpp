#include <iostream>
#include <string>
using namespace std;

//��̬����-������Ʒ

class AbstractDrinking
{
public:
    virtual ~AbstractDrinking()
    {
        //����������
    }
    //��ˮ
    virtual void Boil() = 0;
    //����
    virtual void Brew() = 0;
    //���뱭��
    virtual void PutInCup() = 0;
    //���븨��
    virtual void AddSomething() = 0;
    void make()
    {
        Boil();
        Brew();
        PutInCup();
        AddSomething();
    }

};
// ��������
class coffe : public AbstractDrinking
{
public:
    //��ˮ
    virtual void Boil(){
        cout << "coffe_ˮ" << endl;
    }
    //����
    virtual void Brew(){
        cout << "coffe_��" << endl;
    }
    //���뱭��
    virtual void PutInCup(){
        cout << "coffe_��" << endl;
    }
    //���븨��
    virtual void AddSomething()
    {
        cout << "coffe_��" << endl;
    }
};
// ������Ҷ
class tea : public AbstractDrinking
{
public:
    //��ˮ
    virtual void Boil(){
        cout << "tea_ˮ" << endl;
    }
    //����
    virtual void Brew(){
        cout << "tea_��" << endl;
    }
    //���뱭��
    virtual void PutInCup(){
        cout << "tea_��" << endl;
    }
    //���븨��
    virtual void AddSomething()
    {
        cout << "tea_��" << endl;
    }
};

void dowork(AbstractDrinking *abc)
{
    abc->make();
    delete abc;
}

void test()
{
    dowork(new tea);
}

int main()
{
    test();
    system("pause");
    return 0;
}