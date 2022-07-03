#pragma once    //防止头文件重复包含
#include <iostream>
#include <string>
using namespace std;


//职工抽象类
class Worker
{
public:
    // 此处如果写为纯虚析构：virtual ~Worker() = 0; 
    // 则需要类内定义，类外实现，即必须给父类的纯虚析构在类外重写一次！！！！！！！！！！！！！！！
    virtual ~Worker(){

    };
    
    // 显示个人信息
    virtual void showinfo() = 0;
    // 获取岗位名称
    virtual string get_d_name() = 0;
    // 职工编号
    int id;
    // 职工姓名
    string name;
    // 部门编号
    int d_id;
};

// 普通职工
class employee:public Worker
{
public:
    ~employee();
    // 构造函数
    employee(int id, string name, int d_id);
    // 显示个人信息
    virtual void showinfo();
    // 获取岗位名称
    virtual string get_d_name();
};
// 经理
class manager:public Worker
{
public:
    ~manager();
    // 构造函数
    manager(int id, string name, int d_id);
    // 显示个人信息
    virtual void showinfo();
    // 获取岗位名称
    virtual string get_d_name();
};
// 老板
class boss:public Worker
{
public:
    ~boss();
    // 构造函数
    boss(int id, string name, int d_id);
    // 显示个人信息
    virtual void showinfo();
    // 获取岗位名称
    virtual string get_d_name();
};