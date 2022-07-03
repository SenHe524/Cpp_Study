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

class person
{
public:
    char name[64];
    int age;
};

void test()
{

    ifstream ifs;
    ifs.open("E:/DeskTop/Code/C++/file_read_write/binary_file_read/test.txt", ios::in | ios::binary);
    if(!ifs.is_open())
    {
        cout << "���ļ�ʧ�ܣ����飡" << endl;
        return ;
    }
    person p;
    ifs.read((char *)&p, sizeof(person));
    cout << p.age << p.name << endl;

    ifs.close();


}

int main()
{

    test();
    system("pause");
    return 0;

}
