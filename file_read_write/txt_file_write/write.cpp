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
写文件步骤：
1.包含头文件：#include <fstream>
2.创建流对象：ofstream ofs;
3.打开文件：isf.open("文件路径",打开方式);
打开方式
ios::in     :为读文件而打开文件
ios::out    :为写文件而打开文件
ios::ate    :初始为止：文件尾
ios::app    :追加方式写文件
ios::trunc  :如果文件存在，先删除，再创建
ios::binary :二进制方式
注：文件打开方式可以配合使用，利用|操作符
    用二进制方式写文件 ios::binary |  ios:: out
4.写数据：ofs << "要写入的数据";
5.关闭文件: ofs.close();
*/

void test()
{

    ofstream ofs;
    ofs.open("E:/DeskTop/Code/C++/file_read_write/txt_file_write/test.txt", ios::out | ios::trunc);
    ofs << "要写入的数据" << endl;
    ofs.close();

}

int main()
{

    test();
    system("pause");
    return 0;

}

