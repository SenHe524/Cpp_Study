#include <iostream>
#include "func.h"
using namespace std;

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

void maopao(int *arr, int len)
{
    for(int i = 0; i < len - 1; i++)
    {
        for(int j = 0; j < len - i -1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

