#include <iostream>
#include "worker.h"
using namespace std;

// ���캯��
employee::employee(int id, string name, int d_id){
    this->id = id;
    this->name = name;
    this->d_id = d_id;
}
employee::~employee()
{
}
// ��ʾ������Ϣ
void employee::showinfo(){
    cout << "ְ����ţ� " << this->id
		<< "\tְ�������� " << this->name
		<< "\t��λ�� " << this->get_d_name()
		<< "\t��λְ�� ��ɾ�����������" << endl;
}

// ��ȡ��λ����
string employee::get_d_name(){
    return (string)"Ա��";
}

// ���캯��
manager::manager(int id, string name, int d_id){
    this->id = id;
    this->name = name;
    this->d_id = d_id;
}
manager::~manager()
{
}
// ��ʾ������Ϣ
void manager::showinfo(){
    cout << "ְ����ţ� " << this->id
		<< "\tְ�������� " << this->name
		<< "\t��λ�� " << this->get_d_name()
		<< "\t��λְ�� ����ϰ彻�������񣬲��·������Ա��" << endl;
}
// ��ȡ��λ����
string manager::get_d_name(){
    return (string)"����";
}

// ���캯��
boss::boss(int id, string name, int d_id){
    this->id = id;
    this->name = name;
    this->d_id = d_id;
}
boss::~boss()
{
}
// ��ʾ������Ϣ
void boss::showinfo(){
	cout << "ְ����ţ� " << this->id
		<< "\tְ�������� " << this->name
		<< "\t��λ�� " << this->get_d_name()
		<< "\t��λְ�� ����˾��������" << endl;
}

// ��ȡ��λ����
string boss::get_d_name(){
    return (string)"�ܲ�";
}