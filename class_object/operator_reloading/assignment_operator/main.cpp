#include <iostream>
#include <string>
using namespace std;
//赋值运算符重载


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
    //赋值运算符重载
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
    // 此处 = 赋值操作属于浅拷贝（只拷贝了数据内存地址），因此在test运行完 
    // 释放堆区内存时，同一块内存释放两次，会导致程序崩溃
    // 可以使用赋值运算符重载，将浅拷贝变为深拷贝解决此问题
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