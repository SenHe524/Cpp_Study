#include <iostream>
#include <string>
#include <fstream>
#include "workerManger.h"
#include "worker.h"
using namespace std;
int main()
{
    int select;
    WorkerManger wm;
    while(1)
    {
        wm.showmenu();
        cout << "����������ѡ��";
        cin >> select;
        cout << endl;
        switch (select)
        {
        case 1:     // ���ְ����Ϣ
            wm.AddEmp();
            system("pause");
            system("cls");
            break;
        case 2:     // ��ʾְ����Ϣ
            wm.showEmp();
            system("pause");
            system("cls");
            break;
        case 3:     // ɾ��ְ����Ϣ
            wm.del_Emp();
            system("pause");
            system("cls");
            break;
        case 4:     // �޸�ְ����Ϣ
            wm.change_Emp();
            system("pause");
            system("cls");
            break;
        case 5:     // ����ְ����Ϣ
            wm.searchEmp();
            system("pause");
            system("cls");
            break;
        case 6:     // ���ձ������
            wm.sort_Emp();
            system("pause");
            system("cls");
            break;
        case 7:     // �������ְ����Ϣ
            wm.zero_init();
            system("pause");
            system("cls");
            break;
        case 0:     // �˳�ϵͳ
            wm.exitsystem();
            break;
        default:
            cout << "������0-7֮������֣�" << endl;
            system("cls");
            break;
        }
    }
    system("pause");
    return 0;
}
