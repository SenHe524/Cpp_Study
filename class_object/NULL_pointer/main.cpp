#include <iostream>
#include <string>
using namespace std;

//��ָ����ó�Ա����

class person
{
public:
    void showclassname()
    {
        cout << "person class!" << endl;
    }
    void showage()
    {
        //����Ա��������Ƴ�Ա���Ե���ʱ������������ֹ��ָ��ʹ�������
        // if(this == NULL)
        // {
        //     return ;
        // }
        //thisָ��Ϊ��ָ��ʱ��ʹ�������
        // cout << "age = " << this->age << endl;
    }
private:
    int age;
};
void test01();
int main()
{
    test01();

    system("pause");
    return 0;
}

void test01()
{
    person *p = NULL;
    cout << sizeof(*p) << endl;
    p->showage();
    p->showclassname();

}