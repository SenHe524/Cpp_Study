#include <iostream>
#include <string>
using namespace std;

//��ϵ���������

void test();
class person
{
public:

    int age;
    string name;    
    person(int age, string name)
    {
        this->age = age;
        this->name = name;
    }

    //��ֵ���������
    bool operator==(person &p)
    {
        if((this->age != p.age) || (this->name != p.name))
        {
            return false;
        }
        return true;
    }
    bool operator!=(person &p)
    {
        if((this->age != p.age) || (this->name != p.name))
        {
            return true;
        }
        return false;
    }

};

void test(){

    person p1(18, "����");
    person p2(18, "����");
    if(p1 == p2)
    {
        cout << "Hi" << endl;
    }
    else{
        cout << "No" << endl;
    }
}

int main()
{
    test();
    system("pause");
    return 0;
} 