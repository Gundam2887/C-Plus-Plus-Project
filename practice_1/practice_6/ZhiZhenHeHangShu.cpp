#include<iostream>
using namespace std;

//指针和函数
//1、值传递
//2、地址传递


//1、
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
    //不能修改实参
    swap01(a,b);
    

    //2、
    //可以通过地址传递修改实参
    swap02(&a,&b);
    cout << a << " " << b << endl;
}