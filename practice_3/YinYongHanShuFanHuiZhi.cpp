#include<iostream>
using namespace std;

//�����������ķ���ֵ
//���ã�����ʱ������Ϊ�����ķ���ֵ����
//�÷�����������Ϊ��ֵ
//ע�⣺��Ҫ���ؾֲ���������

// int& test1(){
//     int a = 10;//�ֲ���������������е� ջ��
//     return a;
// }

int& test2(){
    static int a = 10;//��̬�����������ȫ������ȫ�����������ڳ��������ϵͳ�ͷ�
    return a;
}

int main(){
    int &ref = test2();
    cout << ref << endl;

    test2() = 1000;//��������ķ���ֵʱ���ã��������������Ϊ��ֵ
    cout << ref << endl;

}