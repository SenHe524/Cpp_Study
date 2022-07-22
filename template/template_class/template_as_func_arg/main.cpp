#include <iostream>
#include <string>
using namespace std;

// 类模板实例化对象，向函数传参的方式
/*
    1. 指定传入的类型---直接显式对象的数据类型
    2. 参数模板化---将对象中的参数变为模板进行参数传递
    3. 整个类模板化---将整个对象类型模板化进行传递
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

// 1. 显式指定参数类型
void pri1(person<string,int> &p){
    p.showPerson();
}

// 2. 参数模板化
template<class T1, class T2>
void pri2(person<T1,T2> &p){
    p.showPerson();
    cout << "T1的数据类型:" << typeid(T1).name() << endl;
    cout << "T2的数据类型:" << typeid(T2).name() << endl;
}

// 3. 整个类模板化
template<class T>
void pri3(T &p){
    p.showPerson();
    cout << "T的数据类型:" << typeid(T).name() << endl;
}
void test(){
    person<string,int> p1("孙悟空", 100);
    pri1(p1);
    person<string,int> p2("猪八戒", 1);
    pri2(p2);
    person<string,int> p3("唐僧", 10);
    pri3(p3);
}

int main(void)
{
    test();

    system("pause");
    return 0;
}
