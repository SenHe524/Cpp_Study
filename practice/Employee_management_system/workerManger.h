#pragma once    // 防止头文件重复包含
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

    // 显示菜单
    void showmenu();
    // 退出系统
    void exitsystem();
    // 添加职工信息
    void AddEmp();
    // 保存职工信息到文件
    void save();
    // 检查文件是否为空
    bool isFileEmpty();
    // 获取现有职工信息条数
    int getnum();
    // 初始化职工信息
    void init_Emp();
    // 显示职工信息
    void showEmp();
    // 按姓名查找职工信息,返回查找到的信息下标
    int searchindex();
    // 判断是否有所查找的成员
    void searchEmp();
    // 按名字删除职工信息
    void del_Emp();
    // 按名字查找修改职工信息
    void change_Emp();
    // 排序
    void sort_Emp();
    // 清除所有职工信息
    void zero_init();

    bool isEmpty;
    int EmpNum;
    Worker ** EmpArray;
};