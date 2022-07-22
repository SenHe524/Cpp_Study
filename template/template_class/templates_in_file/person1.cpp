#include <iostream>
#include <string>
#include "person1.h"
using namespace std;

template<class T1, class T2>
person1<T1,T2>::person1(T1 name, T2 age){
    this->age = age;
    this->name = name;
}
template<class T1, class T2>
void person1<T1,T2>::showperson(void){
        cout << this->age << endl << this->name << endl;
    }
