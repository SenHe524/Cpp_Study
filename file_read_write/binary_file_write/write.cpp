#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*
�����ļ��������ࣺ
1.ofstream:д����
2.ifstream:������
3.fstream:��д����
*/


//������д
class person
{
public:
    //д�ļ�ʱ��ò��� string �������׳������⣬�Ƽ�ʹ���ַ�����
    char name[64];
    int age;
};

void test()
{

    ofstream ofs;
    ofs.open("E:/DeskTop/Code/C++/file_read_write/binary_file_write/test.txt", ios::out | ios::binary);
    person p = {"����", 18};
    ofs.write((const char *)&p, sizeof(person));
    ofs.close();

}

int main()
{

    test();
    system("pause");
    return 0;

}
