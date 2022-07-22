#include <iostream>
#include <string>
using namespace std;
// ��ģ����ļ���д


#include "person2.hpp"

// ����person1�࣬����pri2����ʵ��ʱ�����ҵ���������
template<class T1, class T2>
class person1;


// ����ʵ��:��Ҫ������ʵ��д��person1��ʵ��ǰ
template<class T1, class T2>
void pri2(person1<T1, T2> p){
    cout << p.name << endl << p.age << endl;
}

template<class T1, class T2>
class person1
{
    // ȫ�ֺ��� ����ʵ��
    friend void pri1(person1<T1, T2> p){
        cout << p.name << endl << p.age << endl;
    }
    // ȫ�ֺ��� ����ʵ��
    friend void pri2<>(person1<T1, T2> p);

public:
    person1(T1 name, T2 age){
    this->age = age;
    this->name = name;
}

private:
    T1 name;
    T2 age;
};

void test1(){
    person1<string, int> p1("�����",100);
    pri1(p1);
    pri2(p1);
}

int main(void)
{
    test1();
    system("pause");
    return 0;
}
