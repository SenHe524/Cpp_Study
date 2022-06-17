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
    // // cout: 打印   << endl :打印换行
    // cout << "a = "<< ch << "a*a = "<< ch*ch << endl;
    // //此条语句相比于上一条少了一个换行
    // cout << "a = "<< ch << "a*a = "<< ch*ch;
    // string str = "hello";
    // cout << str << endl;
    // int aa;
    // cin >> aa;
    // cout << aa << endl;
    // string cc;
    // cin >> cc;
    // cout << cc << endl; 
    // cout << "你好啊！！"<< endl;


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
    // cout << "请输入一个0-100的数：" << endl;
    // while(count--)
    // {
    //     cin >> a;
    //     if(a == num)
    //     {
    //         cout << "恭喜你猜对了！真聪明！" << endl;
    //         flag = 1;
    //         break;
    //     }else if(a > num)
    //     {
    //         cout << "猜大了！" << endl;
    //     }
    //     else{
    //         cout << "猜小了！" << endl;
    //     }
    // }
    // if(!flag)
    // {
    //     cout << "你太笨了！游戏结束" << endl;
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
    //         cout << "敲桌子！" << endl;
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
    // cout << "array数组所占空间为：" << sizeof(array) << "个字节" << endl;
    // cout << "一个array数组元素占：" << sizeof(array[0]) << "个字节" << endl;
    // cout << "数组首地址为：" << array << endl;
    // cout << "数组第一个元素地址为：" << &array[0] << endl;
    // cout << "数组第二个元素地址为：" << &array[1] << endl;

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
    
    // // 注意指针常量和常量指针的区别：
    // // 指针常量：指针指向的内存空间的值可以修改，但指针的指向不可以更改
    // int a = 10;
    // int b = 12;
    // int * const p = &a;
    // *p = 20; //没问题
    // // p = &b; //有问题

    // //常量指针：指针的指向可以更改，但无法修改指针所指向内存空间的值
    // const int *pp = &a;
    // *pp = 20;//有问题
    // pp = &b;//没问题
    system("pause");
    return 0;
}