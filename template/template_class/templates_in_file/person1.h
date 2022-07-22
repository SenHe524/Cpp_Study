#pragma once
#include <iostream>
#include <string>
template<class T1, class T2>
class person1
{
public:
    // 类内声明，类外实现
    person1(T1 name, T2 age);

    void showperson(void);

    T1 name;
    T2 age;

};