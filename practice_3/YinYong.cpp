#include<iostream>
using namespace std;

//����:
//���ã�������ȡ����
//�﷨���������� &���� = ԭ��

int main(){
    int a = 10;
    int &b = a;
    b = 9999;
    cout << b << endl;

    //����ע������
    //1��Ӧ�ñ���Ҫ��ʼ��
    // int &b;����
    //2������һ����ʼ���󣬾Ͳ����Ը��� 
    //�����ֱ��� a��b c��a�ı�������ôc�����Ա��b�ı���
    int c = 20;
    b = c;//��ֵ�����������Ǹ�������
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}