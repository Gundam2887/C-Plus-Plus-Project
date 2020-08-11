#include<iostream>
using namespace std;

//引用:
//作用：给变量取别名
//语法：数据类型 &别名 = 原名

int main(){
    int a = 10;
    int &b = a;
    b = 9999;
    cout << b << endl;

    
}