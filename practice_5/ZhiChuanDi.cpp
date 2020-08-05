#include<iostream>
using namespace std;

//值传递，就是函数调用时实参将数值传入给形参
//值传递时,如果形参发生，并不会影响实参

//定义函数，实现两个数字进行交换函数
//如果函数不需要返回值，声明的时候可以写void

void swap(int num1,int num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << num1 << endl << num2 << endl;
}
int main(){
    int a = 10;
    int b = 20;
    swap(a,b);
    cout << a << " " << b <<endl;
}