#include<iostream>
using namespace std;

//�ܽ᣺
//ȫ�������У�ȫ�ֱ�������̬�������������ַ���������ȫ�ֳ�����
//����ȫ�������У��ֲ��������ֲ�����



//ȫ�ֱ���
int g_a = 10;
int g_b = 10;

//const ���ε�ȫ�ֱ�����ȫ�ֳ���
const int c_g_a = 10;
const int c_g_b = 10;
int main(){

    //ȫ����

    //ȫ�ֱ�������̬����������


    //������ͨ�ֲ�����
    int a = 10;
    int b = 10;

    //�ֲ�����
    cout << &a << endl;
    cout << &b << endl;

    //ȫ�ֱ���
    cout << &g_a << endl;
    cout << &g_b << endl;

    //��̬���� ����ͨ������ǰ��� static ���Ǿ�̬����
    static int s_a = 10;
    static int s_b = 10;

    //��̬����
    cout << &s_a << endl;
    cout << &s_b << endl;

    //����
    //�ַ�������
    cout << &"hello world" << endl;

    //const���α���
    //const���ε�ȫ�ֱ�����const���εľֲ�����
    cout << "ȫ�ֳ���" << &c_g_a<<endl;
    cout << "ȫ�ֳ���" << &c_g_b<<endl;

    const int c_l_a = 10;
    const int c_l_b = 10;

    cout << "�ֲ�����" << &c_l_a<<endl;
    cout << "�ֲ�����" << &c_l_b<<endl;
}