#include <iostream>
#include <string>

using namespace std;

class phone
{
public:
    string name;
    phone(string name_temp)
    {
        name = name_temp;
        cout << "I'm Here! _phone!" << endl;
    }
};

class person
{
public:

    person(string name_ppp, string name_pp):name_h(name_ppp),name_p(name_pp)
    {
        cout << "I'm Here! _person!" << endl;
    }
    string name_h;
    phone name_p;
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
    person p("ÕÅÈý", "Æ»¹û");
    cout << p.name_h  << p.name_p.name << endl;
}