#include<iostream>
using namespace std;

//�����﷨��
/*
����ֵ���� ������ (�����б�){
    ���������
    return ���ʽ
}
*/

//ʵ��һ���ӷ������������������ݣ�����������ӵĽ�������ҷ���

double add(double num1,double num2){
    double sum = 0;
    sum = num1 + num2;
    return sum;
}

int main(){
    cout << add(100,99.9) << endl;

}