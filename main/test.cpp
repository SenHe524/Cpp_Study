#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "swap.h"
using namespace std;

int main()
{
    // int a = 10;
    // char ch = 'a';
    // // cout: ��ӡ   << endl :��ӡ����
    // cout << "a = "<< ch << "a*a = "<< ch*ch << endl;
    // //��������������һ������һ������
    // cout << "a = "<< ch << "a*a = "<< ch*ch;
    // string str = "hello";
    // cout << str << endl;
    // int aa;
    // cin >> aa;
    // cout << aa << endl;
    // string cc;
    // cin >> cc;
    // cout << cc << endl; 
    // cout << "��ð�����"<< endl;


    // int a = 5;
    // int b = 9;
    // a > b? a = 1 : b  = 2;
    // cout << "a = " << a << "\tb = " << b << endl; 
    // a < b? a : b = 56;
    // cout << "a = " << a << "\tb = " << b << endl; 


    // int num = 10;
    // while(num--)
    // {
    //     cout << num << endl;
    // }

    // srand((unsigned int)time(NULL));
    // int num = rand()%100 + 1;
    // int count = 10;
    // int a,flag = 0;
    // cout << "������һ��0-100������" << endl;
    // while(count--)
    // {
    //     cin >> a;
    //     if(a == num)
    //     {
    //         cout << "��ϲ��¶��ˣ��������" << endl;
    //         flag = 1;
    //         break;
    //     }else if(a > num)
    //     {
    //         cout << "�´��ˣ�" << endl;
    //     }
    //     else{
    //         cout << "��С�ˣ�" << endl;
    //     }
    // }
    // if(!flag)
    // {
    //     cout << "��̫���ˣ���Ϸ����" << endl;
    // }
    // cout << num << endl;

    // int a,b,c;
    // int sum;
    // for(int i = 100; i < 1000; i++)
    // {
    //     a = i / 100;
    //     b = (i /10) % 10;
    //     c = i % 10;
    //     if(i == (a*a*a + b*b*b + c*c*c))
    //     {
    //         cout << i << endl;
    //     }
    // }

    // int a,b;
    // for(int i = 0; i < 100; i++)
    // {
    //     a = i / 10;
    //     b = i % 10;
    //     if((a == 7) || (b == 7) || (i % 7 == 0))
    //     {
    //         cout << "�����ӣ�" << endl;
    //     }
    //     else
    //     {
    //         cout << i << endl;
    //     }
    // }

    // for(int i = 1; i <= 4; i++)
    // {
    //     for(int j = 1; j <= 4 - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for(int k = 1; k <= 2 * i - 1; k++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for(int i = 1; i <= 3; i++)
    // {
    //     for(int j = 1; j <= i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for(int k = 1; k <= 7-2*i; k++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // for(int i = 1; i <= 9; i++)
    // {
    //     for(int j = 1; j <= i; j++)
    //     {
    //         cout << i << "*" << j << "=" << i*j << "\t";
        
    //     }cout << endl;
    // }

    // int array[50] = {55};
    // cout << "array������ռ�ռ�Ϊ��" << sizeof(array) << "���ֽ�" << endl;
    // cout << "һ��array����Ԫ��ռ��" << sizeof(array[0]) << "���ֽ�" << endl;
    // cout << "�����׵�ַΪ��" << array << endl;
    // cout << "�����һ��Ԫ�ص�ַΪ��" << &array[0] << endl;
    // cout << "����ڶ���Ԫ�ص�ַΪ��" << &array[1] << endl;

    // int num[] = {15, 58, 22, 11 ,95};
    // for(int i = 0; i < 5-1; i++)
    // {
    //     for(int j = 0; j < 5 -i -1; j++)
    //     {
    //         if(num[j] < num[j+1])
    //         {
    //             int temp = num[j+1];
    //             num[j+1] = num[j];
    //             num[j] = temp;
    //         }
    //     }
    // }
    // for(int i = 0; i < 5; i++)
    // {
    //     cout << num[i] << endl;
    // }
    // swap(5, 6);

    // int *p = NULL;
    // int a = 10;
    // p = &a;
    // cout << p << "\t" << sizeof(p) << endl;
    // cout << *p << endl;
    // cout << a << endl;
    
    // // ע��ָ�볣���ͳ���ָ�������
    // // ָ�볣����ָ��ָ����ڴ�ռ��ֵ�����޸ģ���ָ���ָ�򲻿��Ը���
    // int a = 10;
    // int b = 12;
    // int * const p = &a;
    // *p = 20; //û����
    // // p = &b; //������

    // //����ָ�룺ָ���ָ����Ը��ģ����޷��޸�ָ����ָ���ڴ�ռ��ֵ
    // const int *pp = &a;
    // *pp = 20;//������
    // pp = &b;//û����
    system("pause");
    return 0;
}