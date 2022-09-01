#include <iostream>
#include "workerManger.h"
using namespace std;

WorkerManger::WorkerManger()
{
    ifstream ifs;
    ifs.open(FILENAME, ios::in);
    // 文件不存在
    if(!ifs.is_open())
    {
        // cout << "文件不存在" << endl;
        // 初始化属性
        // 初始化人数
        this->EmpNum = 0;
        // 初始化数组指针
        this->EmpArray = NULL;
        // 初始化文件是否为空
        this->isEmpty = true;
        ifs.close();
        return ;
    }
    // 文件存在但为空
    char ch;
    ifs >> ch;
    if(ifs.eof())
    {
        // 文件为空
        // cout << "文件为空" << endl;
        // 初始化属性
        // 初始化人数
        this->EmpNum = 0;
        // 初始化数组指针
        this->EmpArray = NULL;
        // 初始化文件是否为空
        this->isEmpty = true;
        ifs.close();
        return ;
    }
    // 文件存在，且有数据
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
    cout << "********欢迎使用职工管理系统！********" << endl;
    cout << "***********1.添加职工信息************" << endl;
    cout << "***********2.显示职工信息************" << endl;
    cout << "***********3.删除职工信息************" << endl;
    cout << "***********4.修改职工信息************" << endl;
    cout << "***********5.查找职工信息************" << endl;
    cout << "***********6.按照编号排序************" << endl;
    cout << "***********7.清除所有职工信息********" << endl;
    cout << "***********0.退出系统   ************" << endl;
    cout << "***********************************" << endl;

}
void WorkerManger::exitsystem()
{
    cout << "感谢使用职工管理系统！" << endl;
    system("pause");
    exit(0);
}

void WorkerManger::AddEmp()
{
    int num = 0;
    cout << "请输入您要添加职工的数量：" ;
    cin >> num;
    if(num <= 0)
    {
        cout << "输入数字有误！" << endl;
    }
    else{
        int id;
        string name;
        int d_id;
        // 先计算需要的空间，然后开辟所需空间
        int newsize = this->EmpNum + num;
        Worker * *newspace = new Worker *[newsize];
        // 挪动原来空间的数据
        if(this->EmpArray != NULL)
        {
            for(int i = 0; i < this->EmpNum; i++)
            {
                newspace[i] = this->EmpArray[i];
            }
        }
        // 批量添加新数据
        for(int i = 0; i < num; i++)
        {
            cout << "请输入第" << i+1 << "个新职工的编号：" ;
            cin >> id;
            cout << endl << "请输入第" << i + 1 << "个新职工的名字：" ;
            cin >> name;
            cout << endl << "请输入第" << i + 1 << "个新职工的职位：" ;
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
            // 将创建的职工信息指针保存到数组种
            newspace[this->EmpNum + i] = worker0;
        }
        // 释放原有空间
        delete[] this->EmpArray;
        // 更改新空间指向
        this->EmpArray = newspace;
        // 更新职工人数
        this->EmpNum = newsize;
        // 更新标志位
        this->isEmpty = false;
        // 提示成功添加了多少个人
        cout << "成功添加" << num << "名新员工" << endl;
        // 保存员工数据
        this->save();
    }
}

// 保存员工信息到文件
void WorkerManger::save()
{
    ofstream ofs;
    ofs.open(FILENAME, ios::out);// 用输出的方式打开文件 --- 写文件

    // 将每个职工的数据写入到文件中
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
    ifs.open(FILENAME, ios::in); // 打开文件---读
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
    this->EmpNum  = this->getnum();// 获取文件中职工信息条数
    this->EmpArray = new Worker *[this->EmpNum];// 开辟数据存储区

    // 读取数据到开辟的数据存储区中
    ifstream ifs;
    ifs.open(FILENAME, ios::in); // 打开文件---读
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
    cout << "请输入您要查找的职工姓名：" << endl;
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
        cout << "对不起，没有找到您要查找的职工信息，请确认姓名是否正确！" << endl;
    }
    else
    {
        cout << "您要查找的职工信息如下：" << endl;
        this->EmpArray[index]->showinfo(); 
    }
}

void WorkerManger::del_Emp(){
    int index = searchindex();
    if(index == -1)
    {
        cout << "对不起，没有找到您要删除的职工信息，请确认姓名是否正确！" << endl;
    }
    else
    {
        string choice;
        string ch1 = "y";
        string ch2 = "Y";
        cout << "您要删除的职工信息如下：" << endl;
        this->EmpArray[index]->showinfo();
        cout << "请确认是否删除（Y：确认）：" ;
        cin >> choice;
        if((choice == ch1) || (choice == ch2))
        {
            for(int i = index; i < this->EmpNum - 1; i++)
            {
                this->EmpArray[i] = this->EmpArray[i + 1];
            }
            this->EmpNum -= 1;
            // 保存数据
            this->save();
        }
        else{
            cout << "删除操作取消！" << endl;
        }
    }
}

void WorkerManger::change_Emp(){
    int index = searchindex();
    if(index == -1)
    {
        cout << "对不起，没有找到您要修改的职工信息，请确认姓名是否正确！" << endl;
    }
    else
    {
        this->EmpArray[index]->showinfo();
        delete this->EmpArray[index];
        int id;
        string name;
        int d_id;

        cout << "请输入该员工的新信息：" << endl;
        cout << "请输入该职工的编号：" ;
        cin >> id;
        cout << endl << "请该职工的名字：" ;
        cin >> name;
        cout << endl << "请输入该职工的职位：" ;
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
        cout << endl << "修改职工信息成功！" << endl;
    }
}

void WorkerManger::sort_Emp(){
    cout << "请选择降序或升序排列（1.升序，2.降序）：";
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
    cout << "排序后的结果为：" << endl;
    this->showEmp();
}

void WorkerManger::zero_init(){
    string choice;
    string ch1 = "y";
    string ch2 = "Y";
    cout << "请确认是否删除（Y：确认）：" ;
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
        cout << "取消删除！" << endl;
    }
    
    
}