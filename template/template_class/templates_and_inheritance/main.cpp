#include <iostream>
#include <string>
using namespace std;

// ��ģ����̳�
/*
    1. ������̳еĸ�����һ����ģ��ʱ������������ʱ����Ҫָ����������T����������
    2. ��ָ�����޷������ڴ�
    3. �������ָ��������T�����ͣ��ɽ������Ϊ��ģ��
*/

template<class T> 
class base{
public:
    T m;
};

// class son : public base // ����д����δָ��base��T������
class son1 : public base<int>
{
public:
    void showson(void){
        cout << "son1---" << endl;
    }
};
// ���ָ����������
template<class T>
class son2 : public base<T>
{
public:
    void showson(void){
        cout << "son2---" << endl;
        cout << "T����������Ϊ��" << typeid(T).name() << endl;
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
