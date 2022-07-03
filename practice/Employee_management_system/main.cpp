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
        cout << "请输入您的选择：";
        cin >> select;
        cout << endl;
        switch (select)
        {
        case 1:     // 添加职工信息
            wm.AddEmp();
            system("pause");
            system("cls");
            break;
        case 2:     // 显示职工信息
            wm.showEmp();
            system("pause");
            system("cls");
            break;
        case 3:     // 删除职工信息
            wm.del_Emp();
            system("pause");
            system("cls");
            break;
        case 4:     // 修改职工信息
            wm.change_Emp();
            system("pause");
            system("cls");
            break;
        case 5:     // 查找职工信息
            wm.searchEmp();
            system("pause");
            system("cls");
            break;
        case 6:     // 按照编号排序
            wm.sort_Emp();
            system("pause");
            system("cls");
            break;
        case 7:     // 清除所有职工信息
            wm.zero_init();
            system("pause");
            system("cls");
            break;
        case 0:     // 退出系统
            wm.exitsystem();
            break;
        default:
            cout << "请输入0-7之间的数字！" << endl;
            system("cls");
            break;
        }
    }
    system("pause");
    return 0;
}
