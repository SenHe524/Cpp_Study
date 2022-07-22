#include <iostream>
#include <string>
using namespace std;

// ��ģ��ʵ���������������εķ�ʽ
/*
    1. ָ�����������---ֱ����ʽ�������������
    2. ����ģ�廯---�������еĲ�����Ϊģ����в�������
    3. ������ģ�廯---��������������ģ�廯���д���
*/

template<class T1, class T2> 
class person{
public:
    person(T1 name, T2 age)
    {
        this->age = age;
        this->name = name;
    }

    void showPerson(){
        cout << this->name << endl;
        cout << this->age << endl;
    }

    T1 name;
    T2 age;
};

// 1. ��ʽָ����������
void pri1(person<string,int> &p){
    p.showPerson();
}

// 2. ����ģ�廯
template<class T1, class T2>
void pri2(person<T1,T2> &p){
    p.showPerson();
    cout << "T1����������:" << typeid(T1).name() << endl;
    cout << "T2����������:" << typeid(T2).name() << endl;
}

// 3. ������ģ�廯
template<class T>
void pri3(T &p){
    p.showPerson();
    cout << "T����������:" << typeid(T).name() << endl;
}
void test(){
    person<string,int> p1("�����", 100);
    pri1(p1);
    person<string,int> p2("��˽�", 1);
    pri2(p2);
    person<string,int> p3("��ɮ", 10);
    pri3(p3);
}

int main(void)
{
    test();

    system("pause");
    return 0;
}
