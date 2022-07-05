#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// ʵ��ͨ�õ� �������������ĺ���


//����ģ��
// ��������������ֵ
template<typename T> // ����һ��ģ�塣���߱���������Ĵ���������T��Ҫ����T��һ��ͨ����������
void myswap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
// ʹ��ѡ������Ӵ�С�����飨���͡�char�ͣ�����
template<typename T> // ����һ��ģ�塣���߱���������Ĵ���������T��Ҫ����T��һ��ͨ����������
void mysort(T *arr, int len)
{
    for(int i = 0; i < len; i++)
    {
        
        int max = i; // �϶����ֵ�±�Ϊi
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

template<typename T> // ����һ��ģ�塣���߱���������Ĵ���������T��Ҫ����T��һ��ͨ����������
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