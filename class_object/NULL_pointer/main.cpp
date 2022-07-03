#include <iostream>
#include <string>
using namespace std;

//空指针调用成员函数

class person
{
public:
    void showclassname()
    {
        cout << "person class!" << endl;
    }
    void showage()
    {
        //当成员函数中设计成员属性调用时加上以下语句防止空指针使程序崩溃
        // if(this == NULL)
        // {
        //     return ;
        // }
        //this指针为空指针时会使程序崩溃
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