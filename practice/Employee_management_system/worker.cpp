#include <iostream>
#include "worker.h"
using namespace std;

// 构造函数
employee::employee(int id, string name, int d_id){
    this->id = id;
    this->name = name;
    this->d_id = d_id;
}
employee::~employee()
{
}
// 显示个人信息
void employee::showinfo(){
    cout << "职工编号： " << this->id
		<< "\t职工姓名： " << this->name
		<< "\t岗位： " << this->get_d_name()
		<< "\t岗位职责： 完成经理交给的任务" << endl;
}

// 获取岗位名称
string employee::get_d_name(){
    return (string)"员工";
}

// 构造函数
manager::manager(int id, string name, int d_id){
    this->id = id;
    this->name = name;
    this->d_id = d_id;
}
manager::~manager()
{
}
// 显示个人信息
void manager::showinfo(){
    cout << "职工编号： " << this->id
		<< "\t职工姓名： " << this->name
		<< "\t岗位： " << this->get_d_name()
		<< "\t岗位职责： 完成老板交给的任务，并下发任务给员工" << endl;
}
// 获取岗位名称
string manager::get_d_name(){
    return (string)"经理";
}

// 构造函数
boss::boss(int id, string name, int d_id){
    this->id = id;
    this->name = name;
    this->d_id = d_id;
}
boss::~boss()
{
}
// 显示个人信息
void boss::showinfo(){
	cout << "职工编号： " << this->id
		<< "\t职工姓名： " << this->name
		<< "\t岗位： " << this->get_d_name()
		<< "\t岗位职责： 管理公司所有事务" << endl;
}

// 获取岗位名称
string boss::get_d_name(){
    return (string)"总裁";
}