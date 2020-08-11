#include<iostream>
using namespace std;

//作用：函数传参数时，可以利用引用的技术让形参修饰实参
//优点：可以简化指针修改实参

//交换函数

//1、值传递
void swap1(int a,int b){
    int temp = a;
    a = b;
    b = temp;
}

//2、地址传递
void swap2(int * a,int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

//3、引用传递
void swap3(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
}


int main(){
    int a = 10;
    int b = 20;
    //swap1(a,b);//形参不改变实参
    //swap2(&a,&b);//形参改变实参
    swap3(a,b);//形参改变实参
    cout << a << " " << b << endl;
}