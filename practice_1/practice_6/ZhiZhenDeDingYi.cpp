#include<iostream>
using namespace std;

//指针
//指针就是一个地址
//间接的访问一个内存并且读写它

int main(){
    //1、如何定义一个指针
    int a = 10;
    //指针定义的语法: 数据类型 * 指针变量 
    int * p;
    //让指针记录变量a的地址 : 指针变量 = &变量
    p = &a;
    cout << "a的地址是：" << &a <<endl;
    cout << "指针p是：" << p <<endl;

    //2、如何使用指针
    //可以通过解引用的方式来找到指针指向的内存
    //指针前加 * 代表解引用，找到指针指向的内存中的数据
    *p = 1000;
    cout << "a = " << a <<endl;
    cout << "*p = " << *p <<endl;
}