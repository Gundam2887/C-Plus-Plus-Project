#include<iostream>
using namespace std;

//指针    常量
//int *   p;

//const 修饰指针 常量不能变
//      修饰常量 指向不能变


int main(){
    //1、const修饰指针 常量指针
    //指针指向的值不可以修改,指针指向可以改
    int a = 10;
    int b = 10;

    const int * p = &a;
    //*p = 20; 错误
    p = &b;//正确

    //2、const修饰常量 指针常量
    //指针指向的值可以修改，指针指向不可改
    int * const p2 = &a;
    *p2 = 100;//正确
    //p2 = &b;错误



    //3、const既修饰指针又修饰常量
    //指针指向的值不可以修改，指针指向不可改
    const int * const p3 = &a;
    //*p3 = 100;//错误
    //p3 = &b;错误
}