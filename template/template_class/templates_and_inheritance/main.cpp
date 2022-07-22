#include <iostream>
#include <string>
using namespace std;

// 类模板与继承
/*
    1. 当子类继承的父类是一个类模板时，子类在声明时，需要指定出父类中T的数据类型
    2. 不指定则无法分配内存
    3. 若想灵活指定父类中T的类型，可将子类变为类模板
*/

template<class T> 
class base{
public:
    T m;
};

// class son : public base // 错误写法：未指定base中T的类型
class son1 : public base<int>
{
public:
    void showson(void){
        cout << "son1---" << endl;
    }
};
// 灵活指定数据类型
template<class T>
class son2 : public base<T>
{
public:
    void showson(void){
        cout << "son2---" << endl;
        cout << "T的数据类型为：" << typeid(T).name() << endl;
    }

};

void test(){
    son1 s1;
    s1.showson();
    son2<int> s2;
    s2.showson();
}

int main(void)
{
    test();

    system("pause");
    return 0;
}
