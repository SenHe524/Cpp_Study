#include <iostream>
#include <string>
using namespace std;

//��������������� Ҳ��С����() ������
//1.����������������غ��ʹ�÷ǳ�������ʹ�ã����Ҳ�����º���

void test();


class myprint
{
public:
    //���غ������������
    void operator()(string text)
    {
        cout << text << endl;
    }

};

void test(){
    myprint my;
    my("hello world!");
    //������������
    myprint()("������������");

}

int main()
{
    test();
    system("pause");
    return 0;
} 