#include <iostream>
#include <string>
using namespace std;
//��ֵ���������


void test();
class person
{
public:

    int *age;
    
    person(int age)
    {
        this->age = new int(age);
    }
    ~person()
    {
        delete age;
        cout << "I'm Here" << endl;
    }
    //��ֵ���������
    person& operator=(person &p)
    {
        if(age != NULL)
        {
            delete age;
            age = NULL;
        }
        age = new int(*p.age);
        return *this;
    }

};

void test(){

    person p1(5);
    cout << *p1.age << endl;
    person p2(6);
    cout << *p2.age << endl;
    person p3(8);
    cout << *p3.age << endl;
    // �˴� = ��ֵ��������ǳ������ֻ�����������ڴ��ַ���������test������ 
    // �ͷŶ����ڴ�ʱ��ͬһ���ڴ��ͷ����Σ��ᵼ�³������
    // ����ʹ�ø�ֵ��������أ���ǳ������Ϊ������������
    p2 = p1;
    cout << *p2.age << endl;
    p3 = p2 = p1;

    cout << *p1.age << endl;
    cout << *p2.age << endl;
    cout << *p3.age << endl;
}

int main()
{
    test();
    system("pause");
    return 0;
} 