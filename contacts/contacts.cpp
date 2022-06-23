#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
#define Max 1001
typedef struct
{
    string name;
    int age;
    string gender;
    string num;
    string address;
}info_t;

typedef struct 
{
    info_t personArray[Max];
    int person_num;
}AddressBook_t;

//C++ 中string用法见：https://blog.csdn.net/Sarah_212/article/details/116720933

void menu();
int add(AddressBook_t *data);
void show(AddressBook_t *data, int mark, int i);
int search(AddressBook_t *data);
void del(AddressBook_t *data);
int change(AddressBook_t *data);
void clean(AddressBook_t *data);
int main()
{
    int select;
    int index = -1;
    AddressBook_t data;
    data.person_num = 0;
    cout << "欢迎使用通讯录管理系统！" << endl;
    menu();
    while(1)
    {
        cout << "请选择您需要的操作：";
        cin >> select;
        cout << endl;
        switch (select)
        {
        case 1:
            add(&data);
            break;
        case 2:
            show(&data, 0, 0);
            break;
        case 3:
            del(&data);
            break;
        case 4:
            index = search(&data);
            if(index != -1)
            {
                cout << "您查找的联系人信息如下：" << endl;
                show(&data, 1, index);
            }
            break;
        case 5:
            change(&data);
            break;
        case 6:
            clean(&data);
            break;
        case 0:
            cout << "感谢使用通讯录管理系统！" << endl;
            system("pause");
            return 0;
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

int add(AddressBook_t *data)
{
    if(data->person_num < 1000)
    {
        int i = data->person_num;
        int count = 0;
        cout << "请依次输入联系人姓名、年龄、性别、电话号码、家庭住址：" << endl;
        cin >> data->personArray[i].name;
        cin >> data->personArray[i].age;
        cin >> data->personArray[i].gender;
        cin >> data->personArray[i].num;
        while(data->personArray[i].num.length() != 3)
        {
            cout << "请重新输入正确电话号码：" << endl;
            cin >> data->personArray[i].num;
            count++;
            if((data->personArray[i].num.length() != 3) && (count == 3))
            {
                cout << "本次添加失败，请重新添加联系人！" << endl;
                return 1;
            }
        }
        cin >> data->personArray[i].address;
        data->person_num++;
    }
    else{
        cout << "当前通讯录已满，添加失败！" << endl;
    }
    return 0;
}

void show(AddressBook_t *data, int mark, int j)
{
    if(!mark)
    {
        for(int i = 0; i < data->person_num; i++)
        {
            cout << "第" << i+1 << "号联系人信息如下：" << endl;
            cout << "姓名：" << data->personArray[i].name << "\t";
            cout << "年龄：" << (int)data->personArray[i].age << "\t";
            cout << "性别：" << data->personArray[i].gender << "\t";
            cout << "电话：" << data->personArray[i].num << "\t";
            cout << "住址：" << data->personArray[i].address << endl;
        }
    }
    else{
        cout << "姓名：" << data->personArray[j].name << "\t";
        cout << "年龄：" << (int)data->personArray[j].age << "\t";
        cout << "性别：" << data->personArray[j].gender << "\t";
        cout << "电话：" << data->personArray[j].num << "\t";
        cout << "住址：" << data->personArray[j].address << endl;
    }
    
}

int search(AddressBook_t *data)
{
    string name;
    cout << "请输入您要查找的或删除的联系人姓名：" << endl;
    cin >> name;
    for(int i = 0; i < data->person_num; i++)
    {
        if(name.compare(data->personArray[i].name) == 0)
        {
            return i;
        }
    }
    cout << "您的联系人列表中并没有名叫" << name << "的人！" << endl;
    return -1;
}

void del(AddressBook_t *data)
{
    int index = search(data);
    string con;
    if(index != -1)
    {
        cout << "您要删除的联系人信息如下：" << endl;
        show(data, 1, index);
        cout << "请确认是否删除（Y:确认删除；其他字母取消）：";
        cin >> con;
        if(con.compare("Y") == 0)
        {
            data->personArray[index].name = data->personArray[data->person_num - 1].name;
            data->personArray[index].age = data->personArray[data->person_num - 1].age;
            data->personArray[index].gender = data->personArray[data->person_num - 1].gender;
            data->personArray[index].num = data->personArray[data->person_num - 1].num;
            data->personArray[index].address = data->personArray[data->person_num - 1].address;
            data->person_num--;
            cout << "删除联系人成功！" << endl;
        }
        else{
            cout << "您取消了删除联系人操作！" << endl;
        }
        
    }
}

int change(AddressBook_t *data)
{
    int index = search(data);
    string con;
    if(index != -1)
    {
        cout << "您要修改的联系人信息如下：" << endl;
        show(data, 1, index);

        int count = 0;
        cout << "请依次输入联系人姓名、年龄、性别、电话号码、家庭住址：" << endl;
        cin >> data->personArray[1000].name;
        cin >> data->personArray[1000].age;
        cin >> data->personArray[1000].gender;
        cin >> data->personArray[1000].num;
        while(data->personArray[1000].num.length() != 3)
        {
            cout << "请重新输入正确电话号码：" << endl;
            cin >> data->personArray[1000].num;
            count++;
            if((data->personArray[1000].num.length() != 3) && (count == 3))
            {
                cout << "本次添加失败，请重新添加联系人！" << endl;
                return 1;
            }
        }
        cin >> data->personArray[1000].address;

        cout << "请确认是否修改（Y:确认修改；其他字母取消）：";
        cin >> con;
        if(con.compare("Y") == 0)
        {
            data->personArray[index].name = data->personArray[1000].name;
            data->personArray[index].age = data->personArray[1000].age;
            data->personArray[index].gender = data->personArray[1000].gender;
            data->personArray[index].num = data->personArray[1000].num;
            data->personArray[index].address = data->personArray[1000].address;
            cout << "修改联系人成功！" << endl;
        }
        else{
            cout << "您取消了修改联系人操作！" << endl;
        }
        
    }
    return 0;
}
void clean(AddressBook_t *data)
{
    data->person_num = 0;
}