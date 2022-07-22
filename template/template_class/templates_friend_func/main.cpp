#include <iostream>
#include <string>
using namespace std;
// 类模板分文件编写


#include "person2.hpp"

// 声明person1类，以让pri2函数实现时，能找到参数类型
template<class T1, class T2>
class person1;


// 类外实现:需要将具体实现写在person1类实现前
template<class T1, class T2>
void pri2(person1<T1, T2> p){
    cout << p.name << endl << p.age << endl;
}

template<class T1, class T2>
class person1
{
    // 全局函数 类内实现
    friend void pri1(person1<T1, T2> p){
        cout << p.name << endl << p.age << endl;
    }
    // 全局函数 类外实现
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
    person1<string, int> p1("孙悟空",100);
    pri1(p1);
    pri2(p1);
}

int main(void)
{
    test1();
    system("pause");
    return 0;
}
