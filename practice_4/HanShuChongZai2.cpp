#include<iostream>
using namespace std;

//�������Ƶ�ע������
//1��������Ϊ���ص�����
void func (int& a)//int &a = a;�Ϸ� int &a = 10�����Ϸ�
{
    cout << "a" << endl; 
}

void func (const int& a)//const int a = 10;�Ϸ�
{
    cout << "a!!" << endl; 
}
//2��������������Ĭ�ϲ���
void func2(int b , int c = 10){
    cout << "b" << endl;
}

void func2(int b){
    cout << "b" << endl;
}

int main(){
    int a =10;
    func(a);

    func(10);

    //func2(a);��������������Ĭ�ϲ��������ֶ����ԣ��������������������

}