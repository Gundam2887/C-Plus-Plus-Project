#include<iostream>
using namespace std;

//����

int * func()
{
    //���� new ���Խ����ݿ��ٵ�����
    //ָ�뱾��Ҳ�Ǿֲ�����,����ջ��,ָ�뱣��������Ƿ��ڶ���
    int * p = new int(10);
    return p;
}
int main(){

    //�ڶ�����������
    int * p = func();
    cout << *p << endl;

    system("pause");
    return 0;
}