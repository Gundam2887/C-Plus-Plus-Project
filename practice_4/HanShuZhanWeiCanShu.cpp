#include<iostream>
using namespace std;

//函数占位参数
//C++中函数形参列表里可以有占位参数，用来占位，调用函数时必须填补该位置
//语法：返回值类型 函数名 (数据类型){}
//占位参数还可以有默认参数

void func(int a,int = 10){
    cout << "9" << endl;
}

int main(){
    func(10,10);
}