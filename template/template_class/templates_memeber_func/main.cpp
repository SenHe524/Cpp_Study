#include <iostream>
#include <string>
using namespace std;

// ��ģ���Ա��������ʵ��

template<class T1, class T2>
class person
{
public:
    // ����ʵ��
    // person(T1 name, T2 age)
    // {
    //     this->age = age;
    //     this->name = name;
    // }

    // void showperson(void){
    //     cout << this->age << endl << this->name << endl;
    // }
    // ��������������ʵ��
    person(T1 name, T2 age);

    void showperson(void);
    

    T1 name;
    T2 age;

};
template<class T1, class T2>
person<T1,T2>::person(T1 name, T2 age){
    this->age = age;
    this->name = name;
}
template<class T1, class T2>
void person<T1,T2>::showperson(void){
        cout << this->age << endl << this->name << endl;
    }

void test(){
    person<string, int> p1("�����",100);
    p1.showperson();
}

int main(void)
{
    test();

    system("pause");
    return 0;
}
