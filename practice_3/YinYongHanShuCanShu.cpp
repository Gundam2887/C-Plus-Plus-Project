#include<iostream>
using namespace std;

//���ã�����������ʱ�������������õļ������β�����ʵ��
//�ŵ㣺���Լ�ָ���޸�ʵ��

//��������

//1��ֵ����
void swap1(int a,int b){
    int temp = a;
    a = b;
    b = temp;
}

//2����ַ����
void swap2(int * a,int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

//3�����ô���
void swap3(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
}


int main(){
    int a = 10;
    int b = 20;
    //swap1(a,b);//�ββ��ı�ʵ��
    //swap2(&a,&b);//�βθı�ʵ��
    swap3(a,b);//�βθı�ʵ��
    cout << a << " " << b << endl;
}