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

    
}