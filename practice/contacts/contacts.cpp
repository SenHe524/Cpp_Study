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

//C++ ��string�÷�����https://blog.csdn.net/Sarah_212/article/details/116720933

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
    cout << "��ӭʹ��ͨѶ¼����ϵͳ��" << endl;
    menu();
    while(1)
    {
        cout << "��ѡ������Ҫ�Ĳ�����";
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
                cout << "�����ҵ���ϵ����Ϣ���£�" << endl;
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
            cout << "��лʹ��ͨѶ¼����ϵͳ��" << endl;
            system("pause");
            return 0;
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

int add(AddressBook_t *data)
{
    if(data->person_num < 1000)
    {
        int i = data->person_num;
        int count = 0;
        cout << "������������ϵ�����������䡢�Ա𡢵绰���롢��ͥסַ��" << endl;
        cin >> data->personArray[i].name;
        cin >> data->personArray[i].age;
        cin >> data->personArray[i].gender;
        cin >> data->personArray[i].num;
        while(data->personArray[i].num.length() != 3)
        {
            cout << "������������ȷ�绰���룺" << endl;
            cin >> data->personArray[i].num;
            count++;
            if((data->personArray[i].num.length() != 3) && (count == 3))
            {
                cout << "�������ʧ�ܣ������������ϵ�ˣ�" << endl;
                return 1;
            }
        }
        cin >> data->personArray[i].address;
        data->person_num++;
    }
    else{
        cout << "��ǰͨѶ¼���������ʧ�ܣ�" << endl;
    }
    return 0;
}

void show(AddressBook_t *data, int mark, int j)
{
    if(!mark)
    {
        for(int i = 0; i < data->person_num; i++)
        {
            cout << "��" << i+1 << "����ϵ����Ϣ���£�" << endl;
            cout << "������" << data->personArray[i].name << "\t";
            cout << "���䣺" << (int)data->personArray[i].age << "\t";
            cout << "�Ա�" << data->personArray[i].gender << "\t";
            cout << "�绰��" << data->personArray[i].num << "\t";
            cout << "סַ��" << data->personArray[i].address << endl;
        }
    }
    else{
        cout << "������" << data->personArray[j].name << "\t";
        cout << "���䣺" << (int)data->personArray[j].age << "\t";
        cout << "�Ա�" << data->personArray[j].gender << "\t";
        cout << "�绰��" << data->personArray[j].num << "\t";
        cout << "סַ��" << data->personArray[j].address << endl;
    }
    
}

int search(AddressBook_t *data)
{
    string name;
    cout << "��������Ҫ���ҵĻ�ɾ������ϵ��������" << endl;
    cin >> name;
    for(int i = 0; i < data->person_num; i++)
    {
        if(name.compare(data->personArray[i].name) == 0)
        {
            return i;
        }
    }
    cout << "������ϵ���б��в�û������" << name << "���ˣ�" << endl;
    return -1;
}

void del(AddressBook_t *data)
{
    int index = search(data);
    string con;
    if(index != -1)
    {
        cout << "��Ҫɾ������ϵ����Ϣ���£�" << endl;
        show(data, 1, index);
        cout << "��ȷ���Ƿ�ɾ����Y:ȷ��ɾ����������ĸȡ������";
        cin >> con;
        if(con.compare("Y") == 0)
        {
            data->personArray[index].name = data->personArray[data->person_num - 1].name;
            data->personArray[index].age = data->personArray[data->person_num - 1].age;
            data->personArray[index].gender = data->personArray[data->person_num - 1].gender;
            data->personArray[index].num = data->personArray[data->person_num - 1].num;
            data->personArray[index].address = data->personArray[data->person_num - 1].address;
            data->person_num--;
            cout << "ɾ����ϵ�˳ɹ���" << endl;
        }
        else{
            cout << "��ȡ����ɾ����ϵ�˲�����" << endl;
        }
        
    }
}

int change(AddressBook_t *data)
{
    int index = search(data);
    string con;
    if(index != -1)
    {
        cout << "��Ҫ�޸ĵ���ϵ����Ϣ���£�" << endl;
        show(data, 1, index);

        int count = 0;
        cout << "������������ϵ�����������䡢�Ա𡢵绰���롢��ͥסַ��" << endl;
        cin >> data->personArray[1000].name;
        cin >> data->personArray[1000].age;
        cin >> data->personArray[1000].gender;
        cin >> data->personArray[1000].num;
        while(data->personArray[1000].num.length() != 3)
        {
            cout << "������������ȷ�绰���룺" << endl;
            cin >> data->personArray[1000].num;
            count++;
            if((data->personArray[1000].num.length() != 3) && (count == 3))
            {
                cout << "�������ʧ�ܣ������������ϵ�ˣ�" << endl;
                return 1;
            }
        }
        cin >> data->personArray[1000].address;

        cout << "��ȷ���Ƿ��޸ģ�Y:ȷ���޸ģ�������ĸȡ������";
        cin >> con;
        if(con.compare("Y") == 0)
        {
            data->personArray[index].name = data->personArray[1000].name;
            data->personArray[index].age = data->personArray[1000].age;
            data->personArray[index].gender = data->personArray[1000].gender;
            data->personArray[index].num = data->personArray[1000].num;
            data->personArray[index].address = data->personArray[1000].address;
            cout << "�޸���ϵ�˳ɹ���" << endl;
        }
        else{
            cout << "��ȡ�����޸���ϵ�˲�����" << endl;
        }
        
    }
    return 0;
}
void clean(AddressBook_t *data)
{
    data->person_num = 0;
}