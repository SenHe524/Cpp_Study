#pragma once    //��ֹͷ�ļ��ظ�����
#include <iostream>
#include <string>
using namespace std;


//ְ��������
class Worker
{
public:
    // �˴����дΪ����������virtual ~Worker() = 0; 
    // ����Ҫ���ڶ��壬����ʵ�֣������������Ĵ���������������дһ�Σ�����������������������������
    virtual ~Worker(){

    };
    
    // ��ʾ������Ϣ
    virtual void showinfo() = 0;
    // ��ȡ��λ����
    virtual string get_d_name() = 0;
    // ְ�����
    int id;
    // ְ������
    string name;
    // ���ű��
    int d_id;
};

// ��ְͨ��
class employee:public Worker
{
public:
    ~employee();
    // ���캯��
    employee(int id, string name, int d_id);
    // ��ʾ������Ϣ
    virtual void showinfo();
    // ��ȡ��λ����
    virtual string get_d_name();
};
// ����
class manager:public Worker
{
public:
    ~manager();
    // ���캯��
    manager(int id, string name, int d_id);
    // ��ʾ������Ϣ
    virtual void showinfo();
    // ��ȡ��λ����
    virtual string get_d_name();
};
// �ϰ�
class boss:public Worker
{
public:
    ~boss();
    // ���캯��
    boss(int id, string name, int d_id);
    // ��ʾ������Ϣ
    virtual void showinfo();
    // ��ȡ��λ����
    virtual string get_d_name();
};