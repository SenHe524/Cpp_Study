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
�ı��ļ����ļ����裺
1.����ͷ�ļ��� #include <fstream>
2.���� ������ifstream ifs;
3.���ļ���isf.open("�ļ�·��",�򿪷�ʽ);
�򿪷�ʽ��
ios::in     :Ϊ���ļ������ļ�
ios::out    :Ϊд�ļ������ļ�
ios::ate    :��ʼλ�ã��ļ�β
ios::app    :׷�ӷ�ʽд�ļ�
ios::trunc  :����ļ����ڣ���ɾ�����ٴ���
ios::binary :�����Ʒ�ʽ
4.���ֶ����ݷ�ʽ
5.�ر��ļ�: ifs.close();
*/

void test()
{

    ifstream ifs1;
    ifs1.open("E:/DeskTop/Code/C++/file_read_write/txt_file_read/test.txt", ios::in);
    if(!ifs1.is_open())
    {
        cout << "���ļ�ʧ�ܣ����飡" << endl;
        return ;
    }
    //��һ��
    char buf_1[1024] = {0};
    while(ifs1 >> buf_1)
    {
        cout << "��һ��" << buf_1 << endl;
    }
    cout << endl;

    ifstream ifs2;
    ifs2.open("E:/DeskTop/Code/C++/file_read_write/file_read/test.txt", ios::in);
    if(!ifs2.is_open())
    {
        cout << "���ļ�ʧ�ܣ����飡" << endl;
        return ;
    }
    // �ڶ���
    char buf_2[1024] = {0};
    while(ifs2.getline(buf_2, sizeof(buf_2)))
    {
        cout << "�ڶ���" << buf_2 << endl;
    }
    cout << endl;
    
    ifstream ifs3;
    ifs3.open("E:/DeskTop/Code/C++/file_read_write/file_read/test.txt", ios::in);
    if(!ifs3.is_open())
    {
        cout << "���ļ�ʧ�ܣ����飡" << endl;
        return ;
    }
    // ������
    string buf_3;
    while(getline(ifs3, buf_3))
    {
        cout << "������" << buf_3 << endl;
    }
    cout << endl;

    ifstream ifs4;
    ifs4.open("E:/DeskTop/Code/C++/file_read_write/file_read/test.txt", ios::in);
    if(!ifs4.is_open())
    {
        cout << "���ļ�ʧ�ܣ����飡" << endl;
        return ;
    }
    // ������
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
