#include<iostream>
using namespace std;

//���õı���ʱ�� C++ �ڲ�ʵ��һ��ָ�볣��

//����ʱ���ã�ת��Ϊ int * const a = &a;
 void func(int& ref){
    ref = 100;//a�����ã�ת��Ϊ*a = 100
 }

int main(){
    int a = 10;

    //�Զ�ת��Ϊ int * const ref = &a,ָ�볣����ָ��ָ�򲻿��޸ģ�Ҳ˵��Ϊʲô���ò��ɸ���
    int& ref = a;
    ref = 20;//�ڲ�����ref �����ã��Զ�ת��Ϊ *ref = 20;

    cout << a << endl;
    cout << ref << endl;

    func(a);
    return 0;
}