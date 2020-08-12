#include<iostream>
using namespace std;

//常量引用主要用来修饰形参，防止误操作

//打印数据的函数
void showValue(const int & val)
{
    //val = 1000;
    cout << val << endl;
}

int main(){

    int a = 10;

    //加上const之后 编译器将代码修改 int temp = 10;const int & ref =temp ;
    //const int & ref = 10;

    showValue(a);
}