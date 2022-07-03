#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*
操作文件的三大类：
1.ofstream:写操作
2.ifstream:读操作
3.fstream:读写操作
*/


//二进制写
class person
{
public:
    //写文件时最好不用 string 对象，容易出现问题，推荐使用字符数组
    char name[64];
    int age;
};

void test()
{

    ofstream ofs;
    ofs.open("E:/DeskTop/Code/C++/file_read_write/binary_file_write/test.txt", ios::out | ios::binary);
    person p = {"张三", 18};
    ofs.write((const char *)&p, sizeof(person));
    ofs.close();

}

int main()
{

    test();
    system("pause");
    return 0;

}
