#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//ģ�������
/*
��Щ�ض����������ͣ���Ҫ���廯��ʽ������ʵ��
*/

class person{
public:
    person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    int age;
    string name;
};

template<typename T> // ����һ��ģ�塣���߱���������Ĵ���������T��Ҫ����T��һ��ͨ����������
bool mycompare(T a,T b)
{
    if(a == b)
    return true;
    else
    return false;

}
template<> bool mycompare(person a,person b)// ����һ��ģ�塣���߱���������Ĵ���������T��Ҫ����T��һ��ͨ����������
{
    if((a.name == b.name) && (a.age == b.age))
    {
        return true;
    }
    else{
        return false;
    }
}

void test1()
{
    int a = 10;
    int b = 50;
    int ret = mycompare(a,b);
    if(ret)
    {
        cout << "a = b" << endl;
    }
    else{
        cout << "a ! = b" << endl;
    }
}
void test2()
{
    person p1("Tom", 10);
    person p2("Tom", 10);

    int ret = mycompare(p1,p2);
    if(ret)
    {
        cout << "p1 = p2" << endl;
    }
    else{
        cout << "p1 ! = p2" << endl;
    }
}


int main()
{
    test1();
    test2();
    system("pause");
    return 0;
}