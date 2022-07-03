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

/*
�ı��ļ�д�ļ����裺
1.����ͷ�ļ��� #include <fstream>
2.���� ������ofstream ofs;
3.���ļ���osf.open("�ļ�·��",�򿪷�ʽ);
�򿪷�ʽ��
ios::in     :Ϊ���ļ������ļ�
ios::out    :Ϊд�ļ������ļ�
ios::ate    :��ʼλ�ã��ļ�β
ios::app    :׷�ӷ�ʽд�ļ�
ios::trunc  :����ļ����ڣ���ɾ�����ٴ���
ios::binary :�����Ʒ�ʽ
ע����ͬ��ʽ����ʹ�� | �������ʹ��  eg: ios::out | ios::ate
4.д����: ofs << "Ҫд�������";
5.�ر��ļ�: ofs.close();
*/

void test()
{

    ofstream ofs;
    ofs.open("E:/DeskTop/Code/C++/file_read_write/txt_file_write/test.txt", ios::out | ios::app);
    ofs << "������" << endl;
    ofs.close();

}

int main()
{

    test();
    system("pause");
    return 0;

}
