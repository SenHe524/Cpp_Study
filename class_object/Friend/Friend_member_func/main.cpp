#include <iostream>
#include <string>
using namespace std;

//������Ԫ
class build;
class goodgay;

class goodgay
{
public:
    goodgay();
    // ~goodgay();
    void visit1();
    void visit2();
    build *b;
};

class build
{
    //�ؼ���friend ������������ʹ������Է���private��Ա����
    friend void goodgay::visit1(); 
public:
    build()
    {
        sittingroom = "����";
        bedroom = "����";
    }
    string sittingroom;
private:
    string bedroom;
};
goodgay::goodgay()
{
    b = new build;
}
void goodgay::visit1()
{
    cout << "Goodgay ���ڷ���" << b->sittingroom << endl;
    cout << "Goodgay ���ڷ���" << b->bedroom << endl;
}
void goodgay::visit2()
{
    cout << "Goodgay ���ڷ���" << b->sittingroom << endl;
    // cout << "Goodgay ���ڷ���" << b->bedroom << endl;
}

int main()
{
    goodgay g;
    g.visit1();
    system("pause");
    return 0;
}