#include<iostream>
using namespace std;

int main(){
    //1、短整型 2字节
    //取值范围 -32768~32767
    short a = 10;
    //2、整型 4字节
    
    int b = 10;
    //3、长整型 windows4字节 linux 32位 4字节 64位 8字节
    
    long c = 10;
    //4、长长整型 8字节
    
    long long d = 10;
    cout <<a <<endl << b << endl << c << endl << d <<endl;
    system("pause");
    return 0;

}