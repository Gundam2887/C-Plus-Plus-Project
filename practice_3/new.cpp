#include<iostream>
using namespace std;

//1��new�Ļ����÷�
int * func()
{
    //�ڶ���������������
    //new ���ص��� ���������͵�ָ��
    int * p = new int(10);
    return p;
} 
void test1()
{
    //�����������ֳ���Ա�����٣�����Ա�����ͷ�
    //������ͷŶ��������ݣ����ùػ���delete
    int * p = func();
    cout << *p << endl;

    delete p;
    cout << *p << endl;
}

//2���ڶ�ȥ����new ��������
void test2()
{
    //����10�������ݵ����飬�ڶ���
    int * arr = new int[10];//10����������10��Ԫ��
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 100;//��10��Ԫ�ظ�ֵ 100 ~ 109
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr [i] << endl;
    }
    //�ͷŶ�������
    //�ͷ������ʱ�� delete ��Ҫ�� [] �ſ���
    delete[] arr;

    // for (int i = 0; i < 10; i++)
    // {
    //     cout << arr [i] << endl;
    // }
}
int main(){
    test1();
    test2();
    system ("pause");
    return 0;
}