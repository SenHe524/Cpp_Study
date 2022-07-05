#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// 实现通用的 对数组进行排序的函数


//函数模板
// 交换两个参数的值
template<typename T> // 声明一个模板。告诉编译器后面的代码紧跟这的T不要报错，T是一个通用数据类型
void myswap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
// 使用选择排序从大到小对数组（整型、char型）排序
template<typename T> // 声明一个模板。告诉编译器后面的代码紧跟这的T不要报错，T是一个通用数据类型
void mysort(T *arr, int len)
{
    for(int i = 0; i < len; i++)
    {
        
        int max = i; // 认定最大值下标为i
        for(int j = i + 1; j < len; j++)
        {
            if(arr[max] < arr[j])
            {
                max = j;
            }
        }
        if(max != i)
        {
            // T temp = arr[i];
            // arr[i] = arr[max];
            // arr[max] = temp;
            myswap(arr[max], arr[i]);
        }
    }
}

template<typename T> // 声明一个模板。告诉编译器后面的代码紧跟这的T不要报错，T是一个通用数据类型
void myprint(T *arr, int len)
{
    for(int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void test()
{
    char chararr[] = "acgsfw";
    int num = sizeof(chararr)/sizeof(char);
    mysort(chararr, num);
    myprint(chararr, num);
    int intarr[] = {10,4,6,2,3,7,5,9};
    int num1 = sizeof(intarr)/sizeof(int);
    mysort(intarr, num1);
    myprint(intarr, num1);
}



int main()
{
    test();
    system("pause");
    return 0;
}