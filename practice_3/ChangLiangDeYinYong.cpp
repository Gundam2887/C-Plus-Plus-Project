#include<iostream>
using namespace std;

//����������Ҫ���������βΣ���ֹ�����

//��ӡ���ݵĺ���
void showValue(const int & val)
{
    //val = 1000;
    cout << val << endl;
}

int main(){

    int a = 10;

    //����const֮�� �������������޸� int temp = 10;const int & ref =temp ;
    //const int & ref = 10;

    showValue(a);
}