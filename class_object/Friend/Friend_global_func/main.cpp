#include <iostream>
#include <string>
using namespace std;

//ȫ�ֺ�������Ԫ
class build
{
    //�ؼ���friend ����ȫ�ֺ���������ʹ��ȫ�ֺ������Է���private��Ա����
    friend void gd(build &b); 
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
void gd(build &b)
{
    cout << "ȫ�ֺ������ʣ� " << b.sittingroom << endl;
    cout << "ȫ�ֺ������ʣ� " << b.bedroom << endl;
}


int main()
{
    build b;
    gd(b);
    system("pause");
    return 0;
}