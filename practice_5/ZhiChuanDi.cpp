#include<iostream>
using namespace std;

//ֵ���ݣ����Ǻ�������ʱʵ�ν���ֵ������β�
//ֵ����ʱ,����βη�����������Ӱ��ʵ��

//���庯����ʵ���������ֽ��н�������
//�����������Ҫ����ֵ��������ʱ�����дvoid

void swap(int num1,int num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << num1 << endl << num2 << endl;
}
int main(){
    int a = 10;
    int b = 20;
    swap(a,b);
    cout << a << " " << b <<endl;
}