#pragma once    // ��ֹͷ�ļ��ظ�����
#include <iostream>
#include "worker.h"
#include <fstream>
using namespace std;

#define FILENAME "E:/DeskTop/Code/C++/practice/Employee_management_system/info.txt"

class WorkerManger
{
public:
    WorkerManger();
    ~WorkerManger();

    // ��ʾ�˵�
    void showmenu();
    // �˳�ϵͳ
    void exitsystem();
    // ���ְ����Ϣ
    void AddEmp();
    // ����ְ����Ϣ���ļ�
    void save();
    // ����ļ��Ƿ�Ϊ��
    bool isFileEmpty();
    // ��ȡ����ְ����Ϣ����
    int getnum();
    // ��ʼ��ְ����Ϣ
    void init_Emp();
    // ��ʾְ����Ϣ
    void showEmp();
    // ����������ְ����Ϣ,���ز��ҵ�����Ϣ�±�
    int searchindex();
    // �ж��Ƿ��������ҵĳ�Ա
    void searchEmp();
    // ������ɾ��ְ����Ϣ
    void del_Emp();
    // �����ֲ����޸�ְ����Ϣ
    void change_Emp();
    // ����
    void sort_Emp();
    // �������ְ����Ϣ
    void zero_init();

    bool isEmpty;
    int EmpNum;
    Worker ** EmpArray;
};