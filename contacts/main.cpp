#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

typedef struct
{
    string name;
    int age;
    string address;

}info_t;

//C++ ��string�÷�����https://blog.csdn.net/Sarah_212/article/details/116720933

void menu();
int main()
{
    int select;
    int flag = 1;
    cout << "��ӭʹ��ͨѶ¼����ϵͳ��" << endl;
    menu();
    while(flag)
    {
        cout << "��ѡ������Ҫ�Ĳ�����";
        cin >> select;
        cout << endl;
        switch (select)
        {
        case 1:
            /* code */
            break;
        case 2:
            /* code */
            break;
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 5:
            /* code */
            break;
        case 6:
            /* code */
            break;
        case 0:
            flag = 0;
            cout << "��лʹ��ͨѶ¼����ϵͳ��" << endl;
            break;
        default:
            cout << "������0-6֮������֣�" << endl;
            break;
        }
    }
    system("pause");
    return 0;
}

void menu()
{
    cout << "*********************************" << endl;
    cout << "**********1.�����ϵ��************" << endl;
    cout << "**********2.��ʾ��ϵ��************" << endl;
    cout << "**********3.ɾ����ϵ��************" << endl;
    cout << "**********4.������ϵ��************" << endl;
    cout << "**********5.�޸���ϵ��************" << endl;
    cout << "**********6.�����ϵ��************" << endl;
    cout << "**********0.�˳�ϵͳ  ************" << endl;
    cout << "*********************************" << endl;
}
