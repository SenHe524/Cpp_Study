#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*
�����ļ������ࣺ
1.ofstream:д����
2.ifstream:������
3.fstream:��д����
*/

/*
д�ļ����裺
1.����ͷ�ļ���#include <fstream>
2.����������ofstream ofs;
3.���ļ���isf.open("�ļ�·��",�򿪷�ʽ);
�򿪷�ʽ
ios::in     :Ϊ���ļ������ļ�
ios::out    :Ϊд�ļ������ļ�
ios::ate    :��ʼΪֹ���ļ�β
ios::app    :׷�ӷ�ʽд�ļ�
ios::trunc  :����ļ����ڣ���ɾ�����ٴ���
ios::binary :�����Ʒ�ʽ
ע���ļ��򿪷�ʽ�������ʹ�ã�����|������
    �ö����Ʒ�ʽд�ļ� ios::binary |  ios:: out
4.д���ݣ�ofs << "Ҫд�������";
5.�ر��ļ�: ofs.close();
*/

void test()
{

    ofstream ofs;
    ofs.open("E:/DeskTop/Code/C++/file_read_write/txt_file_write/test.txt", ios::out | ios::trunc);
    ofs << "Ҫд�������" << endl;
    ofs.close();

}

int main()
{

    test();
    system("pause");
    return 0;

}

