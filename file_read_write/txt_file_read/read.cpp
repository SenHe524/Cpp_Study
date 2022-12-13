#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*
操作文件三大类：
1.ofstream:写操作
2.ifstream:读操作
3.fstream:读写操作
*/

/*
读文件步骤：
1.包含头文件：#include <fstream>
2.创建流对象：ifstream ifs;
3.打开文件：isf.open("文件路径",打开方式);
打开方式
ios::in     :为读文件而打开文件
ios::out    :为写文件而打开文件
ios::ate    :初始为止：文件尾
ios::app    :追加方式写文件
ios::trunc  :如果文件存在，先删除，再创建
ios::binary :二进制方式
4.四种方式读取数据
5.关闭文件: ifs.close();
*/

void test()
{

    ifstream ifs1;
    ifs1.open("E:/DeskTop/Code/C++/file_read_write/txt_file_read/test.txt", ios::in);
    if(!ifs1.is_open())
    {
        cout << "打开文件失败" << endl;
        return ;
    }
    //第一种方式
    char buf_1[1024] = {0};
    while(ifs1 >> buf_1)
    {
        cout << buf_1 << endl;
    }
    cout << endl;

    ifstream ifs2;
    ifs2.open("E:/DeskTop/Code/C++/file_read_write/file_read/test.txt", ios::in);
    if(!ifs2.is_open())
    {
        cout << "打开文件失败" << endl;
        return ;
    }
    // 第二种方式
    char buf_2[1024] = {0};
    while(ifs2.getline(buf_2, sizeof(buf_2)))
    {
        cout << buf_2 << endl;
    }
    cout << endl;
    
    ifstream ifs3;
    ifs3.open("E:/DeskTop/Code/C++/file_read_write/file_read/test.txt", ios::in);
    if(!ifs3.is_open())
    {
        cout << "打开文件失败" << endl;
        return ;
    }
    // 第三种方式
    string buf_3;
    while(getline(ifs3, buf_3))
    {
        cout << buf_3 << endl;
    }
    cout << endl;

    ifstream ifs4;
    ifs4.open("E:/DeskTop/Code/C++/file_read_write/file_read/test.txt", ios::in);
    if(!ifs4.is_open())
    {
        cout << "打开文件失败" << endl;
        return ;
    }
    // 第四种方式
    char c;
    while((c = ifs4.get()) != EOF)// EOF: End Of File
    {
        cout << c ;
    }


    ifs1.close();
    ifs2.close();
    ifs3.close();
    ifs4.close();

}

int main()
{

    test();
    system("pause");
    return 0;

}
