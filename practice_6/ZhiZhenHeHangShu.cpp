#include<iostream>
using namespace std;

//ָ��ͺ���
//1��ֵ����
//2����ַ����


//1��
void swap01(int a ,int b){
    int temp = a;
    a = b;
    b = temp;
    cout << a << " " << b << endl;
}
void swap02(int * a ,int * b){
    int temp = *a;
    *a = *b;
    *b = temp;    
}

int main(){
    int a = 10;
    int b = 20;
    //�����޸�ʵ��
    swap01(a,b);
    

    //2��
    //����ͨ����ַ�����޸�ʵ��
    swap02(&a,&b);
    cout << a << " " << b << endl;
}