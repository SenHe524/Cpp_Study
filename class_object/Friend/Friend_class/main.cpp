#include <iostream>
#include <string>
using namespace std;

//������Ԫ
class build
{
    //�ؼ���friend ������������ʹ������Է���private��Ա����
    friend class goodgay; 
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

class goodgay
{
public:
    goodgay()
    {
        b = new build;
    }
    void visit()
    {
        cout << "Goodgay ���ڷ���" << b->sittingroom << endl;
        cout << "Goodgay ���ڷ���" << b->bedroom << endl;
    }
    build *b;
};



void gd(build &b)
{
//     cout << "ȫ�ֺ������ʣ� " << b.sittingroom << endl;
//     cout << "ȫ�ֺ������ʣ� " << b.bedroom << endl;
}


int main()
{
    goodgay g;
    g.visit();
    system("pause");
    return 0;
}