#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

// vector�������������������


void myPrint(int val)
{
    cout << val << endl;
}

void test(){
    // ������һ��Vector����������
    vector<int> v;
    // �������в�������
    v.push_back(10);
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);
    // ͨ�����������������е�����
    vector<int>::iterator itBegin = v.begin(); // ��ʼ��������ָ�������еĵ�һ��Ԫ��
    vector<int>::iterator itEnd = v.end(); // ������������ָ�����������һ��Ԫ�ص���һ��λ��
    // ��һ�ֱ�����ʽ
    while(itBegin!=itEnd)
    {
        cout << *itBegin << endl;
        itBegin++;
    }

    // �ڶ��ֱ�����ʽ
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }

    // �����ֱ�����ʽ ����STL�еı����㷨�������ͷ�ļ��� #include <algorithm>
    for_each(v.begin(),v.end(),myPrint);


}


int main(void)
{

    test();
    system("pause");
    return 0;
}