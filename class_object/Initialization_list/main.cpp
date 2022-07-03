#include <iostream>
#include <string>
#include "object.h"
using namespace std;

void test01();
int main()
{
    test01();
    system("pause");
    return 0;
}

void test01()
{
    point p(15, 20);
    cout << p.getx() << p.gety() << endl;
}