#pragma once
#include <iostream>
#include <string>

using namespace std;

template<class T1, class T2>
class person2
{
public:
    // 类内声明
    person2(T1 name, T2 age);

    void showperson(void);

    T1 name;
    T2 age;
};
// 类外实现
template<class T1, class T2>
person2<T1,T2>::person2(T1 name, T2 age){
    this->age = age;
    this->name = name;
}
template<class T1, class T2>
void person2<T1,T2>::showperson(void){
        cout << this->age << endl << this->name << endl;
    }
