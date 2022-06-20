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

//C++ 中string用法见：https://blog.csdn.net/Sarah_212/article/details/116720933

void menu();
int main()
{
    int select;
    int flag = 1;
    cout << "欢迎使用通讯录管理系统！" << endl;
    menu();
    while(flag)
    {
        cout << "请选择您需要的操作：";
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
            cout << "感谢使用通讯录管理系统！" << endl;
            break;
        default:
            cout << "请输入0-6之间的数字！" << endl;
            break;
        }
    }
    system("pause");
    return 0;
}

void menu()
{
    cout << "*********************************" << endl;
    cout << "**********1.添加联系人************" << endl;
    cout << "**********2.显示联系人************" << endl;
    cout << "**********3.删除联系人************" << endl;
    cout << "**********4.查找联系人************" << endl;
    cout << "**********5.修改联系人************" << endl;
    cout << "**********6.清空联系人************" << endl;
    cout << "**********0.退出系统  ************" << endl;
    cout << "*********************************" << endl;
}
