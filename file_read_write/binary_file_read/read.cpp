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
        cout << "打开文件失败！请检查！" << endl;
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
