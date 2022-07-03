#include <iostream>
#include <string>
using namespace std;

//关系运算符重载

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

    //赋值运算符重载
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

    person p1(18, "张三");
    person p2(18, "张三");
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