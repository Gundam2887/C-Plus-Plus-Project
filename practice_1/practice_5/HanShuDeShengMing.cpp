#include<iostream>
using namespace std;

//����������
//��ǰ���߱����������Ĵ��ڣ��������ú���������

//�ȽϺ�����ʵ����������������бȽϣ����ؽϴ��ֵ
//����������
//��������д��Σ����Ƕ���ֻ����һ��

int max(int a,int b);

int main(){
    int a = 10;
    int b = 20;
    
    cout << max(a,b) << endl;
}

int max(int a,int b){
    return a > b ? a : b;
}