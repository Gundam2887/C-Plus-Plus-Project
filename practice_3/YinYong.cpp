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

    //引用注意事项
    //1、应用必须要初始化
    // int &b;错误
    //2、引用一旦初始化后，就不可以更改 
    //比如又变量 a、b c是a的别名，那么c不可以变成b的别名
    int c = 20;
    b = c;//赋值操作，而不是更改引用
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}