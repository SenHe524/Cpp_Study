#include <iostream>
#include "workerManger.h"
using namespace std;

WorkerManger::WorkerManger()
{
    ifstream ifs;
    ifs.open(FILENAME, ios::in);
    // �ļ�������
    if(!ifs.is_open())
    {
        // cout << "�ļ�������" << endl;
        // ��ʼ������
        // ��ʼ������
        this->EmpNum = 0;
        // ��ʼ������ָ��
        this->EmpArray = NULL;
        // ��ʼ���ļ��Ƿ�Ϊ��
        this->isEmpty = true;
        ifs.close();
        return ;
    }
    // �ļ����ڵ�Ϊ��
    char ch;
    ifs >> ch;
    if(ifs.eof())
    {
        // �ļ�Ϊ��
        // cout << "�ļ�Ϊ��" << endl;
        // ��ʼ������
        // ��ʼ������
        this->EmpNum = 0;
        // ��ʼ������ָ��
        this->EmpArray = NULL;
        // ��ʼ���ļ��Ƿ�Ϊ��
        this->isEmpty = true;
        ifs.close();
        return ;
    }
    // �ļ����ڣ���������
    this->init_Emp();

}
WorkerManger::~WorkerManger()
{
    if(this->EmpArray != NULL)
    {
        for (int i = 0; i < this->EmpNum; i++)
		{
			if (this->EmpArray[i] != NULL)
			{
				delete this->EmpArray[i];
			}
		}
        delete[] this->EmpArray;
        this->EmpArray = NULL;
    }
}
void WorkerManger::showmenu(){
    cout << "************************************" << endl;
    cout << "********��ӭʹ��ְ������ϵͳ��********" << endl;
    cout << "***********1.���ְ����Ϣ************" << endl;
    cout << "***********2.��ʾְ����Ϣ************" << endl;
    cout << "***********3.ɾ��ְ����Ϣ************" << endl;
    cout << "***********4.�޸�ְ����Ϣ************" << endl;
    cout << "***********5.����ְ����Ϣ************" << endl;
    cout << "***********6.���ձ������************" << endl;
    cout << "***********7.�������ְ����Ϣ********" << endl;
    cout << "***********0.�˳�ϵͳ   ************" << endl;
    cout << "***********************************" << endl;

}
void WorkerManger::exitsystem()
{
    cout << "��лʹ��ְ������ϵͳ��" << endl;
    system("pause");
    exit(0);
}

void WorkerManger::AddEmp()
{
    int num = 0;
    cout << "��������Ҫ���ְ����������" ;
    cin >> num;
    if(num <= 0)
    {
        cout << "������������" << endl;
    }
    else{
        int id;
        string name;
        int d_id;
        // �ȼ�����Ҫ�Ŀռ䣬Ȼ�󿪱�����ռ�
        int newsize = this->EmpNum + num;
        Worker * *newspace = new Worker *[newsize];
        // Ų��ԭ���ռ������
        if(this->EmpArray != NULL)
        {
            for(int i = 0; i < this->EmpNum; i++)
            {
                newspace[i] = this->EmpArray[i];
            }
        }
        // �������������
        for(int i = 0; i < num; i++)
        {
            cout << "�������" << i+1 << "����ְ���ı�ţ�" ;
            cin >> id;
            cout << endl << "�������" << i + 1 << "����ְ�������֣�" ;
            cin >> name;
            cout << endl << "�������" << i + 1 << "����ְ����ְλ��" ;
            cin >> d_id;
            cout << endl;
            Worker * worker0 = NULL;
            switch(d_id)
            {
            case 1:
                worker0 = new employee(id, name, d_id);
                break;
            case 2:
                worker0 = new manager(id, name, d_id);
                break;
            case 3:
                worker0 = new boss(id, name, d_id);
                break;
            default:
                worker0 = new employee(id, name, d_id);
                break;
            }
            // ��������ְ����Ϣָ�뱣�浽������
            newspace[this->EmpNum + i] = worker0;
        }
        // �ͷ�ԭ�пռ�
        delete[] this->EmpArray;
        // �����¿ռ�ָ��
        this->EmpArray = newspace;
        // ����ְ������
        this->EmpNum = newsize;
        // ���±�־λ
        this->isEmpty = false;
        // ��ʾ�ɹ�����˶��ٸ���
        cout << "�ɹ����" << num << "����Ա��" << endl;
        // ����Ա������
        this->save();
    }
}

// ����Ա����Ϣ���ļ�
void WorkerManger::save()
{
    ofstream ofs;
    ofs.open(FILENAME, ios::out);// ������ķ�ʽ���ļ� --- д�ļ�

    // ��ÿ��ְ��������д�뵽�ļ���
    for(int i = 0; i < this->EmpNum; i++)
    {
        ofs << this->EmpArray[i]->id << " "
            << this->EmpArray[i]->name << " "
            << this->EmpArray[i]->d_id << endl;
    }
    ofs.close();
}

int WorkerManger::getnum(){

    ifstream ifs;
    ifs.open(FILENAME, ios::in); // ���ļ�---��
    int num = 0;
    int id;
    string name;
    int d_id;
    while((ifs >> id) && (ifs >> name) && (ifs >> d_id))
    {
        num++;
    }
    return num;
}

void WorkerManger::init_Emp()
{
    this->EmpNum  = this->getnum();// ��ȡ�ļ���ְ����Ϣ����
    this->EmpArray = new Worker *[this->EmpNum];// �������ݴ洢��

    // ��ȡ���ݵ����ٵ����ݴ洢����
    ifstream ifs;
    ifs.open(FILENAME, ios::in); // ���ļ�---��
    int index = 0;
    int id;
    string name;
    int d_id;

    while((ifs >> id) && (ifs >> name) && (ifs >> d_id))
    {
        Worker *worker0 = NULL;
        switch (d_id)
        {
        case 1:
            worker0 = new employee(id, name, d_id);
            break;
        case 2:
            worker0 = new manager(id, name, d_id);
            break;
        case 3:
            worker0 = new boss(id, name, d_id);
            break;
        default:
            worker0 = new employee(id, name, d_id);
            break;
        }
        this->EmpArray[index] = worker0;
        index++;
    }
    ifs.close();
}

void WorkerManger::showEmp()
{
    if(!this->isEmpty)
    {
        for(int i = 0; i < this->EmpNum; i++)
        {
            this->EmpArray[i]->showinfo();
        }
    }
    
}
int WorkerManger::searchindex(){
    string search_name;
    cout << "��������Ҫ���ҵ�ְ��������" << endl;
    cin >> search_name;
    for(int i = 0; i < this->EmpNum; i++)
    {
        if(this->EmpArray[i]->name == search_name)
        {
            return i;
        }
    }
    return -1;
}

void WorkerManger::searchEmp()
{
    int index = searchindex();
    if(index == -1)
    {
        cout << "�Բ���û���ҵ���Ҫ���ҵ�ְ����Ϣ����ȷ�������Ƿ���ȷ��" << endl;
    }
    else
    {
        cout << "��Ҫ���ҵ�ְ����Ϣ���£�" << endl;
        this->EmpArray[index]->showinfo(); 
    }
}

void WorkerManger::del_Emp(){
    int index = searchindex();
    if(index == -1)
    {
        cout << "�Բ���û���ҵ���Ҫɾ����ְ����Ϣ����ȷ�������Ƿ���ȷ��" << endl;
    }
    else
    {
        string choice;
        string ch1 = "y";
        string ch2 = "Y";
        cout << "��Ҫɾ����ְ����Ϣ���£�" << endl;
        this->EmpArray[index]->showinfo();
        cout << "��ȷ���Ƿ�ɾ����Y��ȷ�ϣ���" ;
        cin >> choice;
        if((choice == ch1) || (choice == ch2))
        {
            for(int i = index; i < this->EmpNum - 1; i++)
            {
                this->EmpArray[i] = this->EmpArray[i + 1];
            }
            this->EmpNum -= 1;
            // ��������
            this->save();
        }
        else{
            cout << "ɾ������ȡ����" << endl;
        }
    }
}

void WorkerManger::change_Emp(){
    int index = searchindex();
    if(index == -1)
    {
        cout << "�Բ���û���ҵ���Ҫ�޸ĵ�ְ����Ϣ����ȷ�������Ƿ���ȷ��" << endl;
    }
    else
    {
        this->EmpArray[index]->showinfo();
        delete this->EmpArray[index];
        int id;
        string name;
        int d_id;

        cout << "�������Ա��������Ϣ��" << endl;
        cout << "�������ְ���ı�ţ�" ;
        cin >> id;
        cout << endl << "���ְ�������֣�" ;
        cin >> name;
        cout << endl << "�������ְ����ְλ��" ;
        cin >> d_id;
        Worker * worker0 = NULL;
        switch(d_id)
        {
        case 1:
            worker0 = new employee(id, name, d_id);
            break;
        case 2:
            worker0 = new manager(id, name, d_id);
            break;
        case 3:
            worker0 = new boss(id, name, d_id);
            break;
        default:
            worker0 = new employee(id, name, d_id);
            break;
        }
        this->EmpArray[index] = worker0;
        cout << endl << "�޸�ְ����Ϣ�ɹ���" << endl;
    }
}

void WorkerManger::sort_Emp(){
    cout << "��ѡ������������У�1.����2.���򣩣�";
    int select;
    cin >> select;
    for(int i = 0; i < this->EmpNum; i++)
    {
        int index_init = i;
        for(int j = i + 1; j < this->EmpNum; j++)
        {
            if(select == 1){
                if(this->EmpArray[index_init]->id > this->EmpArray[j]->id)
                {
                    index_init = j;
                }
            }
            else{
                if(this->EmpArray[index_init]->id < this->EmpArray[j]->id)
                {
                    index_init = j;
                }
            }
        }
        if(i != index_init)
        {
            Worker *temp = this->EmpArray[i];
            this->EmpArray[i] = this->EmpArray[index_init];
            this->EmpArray[index_init] = temp;
        }
    }
    this->save();
    cout << "�����Ľ��Ϊ��" << endl;
    this->showEmp();
}

void WorkerManger::zero_init(){
    string choice;
    string ch1 = "y";
    string ch2 = "Y";
    cout << "��ȷ���Ƿ�ɾ����Y��ȷ�ϣ���" ;
    cin >> choice;
    if((choice == ch1) || (choice == ch2))
    {
        delete[] this->EmpArray;
        this->EmpNum = 0;
        this->EmpArray = NULL;
        this->isEmpty = true;
        this->save();
    }
    else{
        cout << "ȡ��ɾ����" << endl;
    }
    
    
}