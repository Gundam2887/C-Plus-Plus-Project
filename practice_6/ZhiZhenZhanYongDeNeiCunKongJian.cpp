#include<iostream>
using namespace std;

//��32λ�Ĳ���ϵͳ�£�ռ��4���ֽڿռ�
//��54λ�Ĳ���ϵͳ�£�ռ��8���ֽڿռ�

int main(){
    int a = 10;
    // int * p;
    // p = &a;

    int * p = &a;

    cout << sizeof(int 
    *) << endl;
    cout << sizeof(float *) << endl;
    cout << sizeof(double *) << endl;
    cout << sizeof(char *) << endl;
    cout << sizeof(p) << endl;  
    system("pause");
    return 0;


}