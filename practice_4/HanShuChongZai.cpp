#include<iostream>
using namespace std;

//��������
//������������ͬ����߸�����
//����������
//1��ͬһ����������
//2����������ͬ
//3���������� ���Ͳ�ͬ ���� ������ͬ ����˳��ͬ
//PS�������ķ���ֵ��������Ϊ�������ص�����

void func(){
    cout << "a" << endl;
}

void func(int a){
    cout << "a!" << endl;
}

void func(double a) {
    cout << "a!!" << endl;
}

void func(double a , int b) {
    cout << "a!!!" << endl;
}

void func(int a , double b) {
    cout << "a!!!!" << endl;
}
// int func(int a , double b) {
//     cout << "a!!!!" << endl;
// }

int main(){
    int a = 10;
    func(a);
    func(1.11);
}