#include<iostream>
using namespace std;

//三目运算符
//语法： 表达式1 ？ 表达式2 ： 表达式3
//如果 表达式1 为真 执行表达式2 并返回表达式2 的结果
//如果 表达式1 为假 执行表达式3 并返回表达式3 的结果

int main(){
    //将 a 和 b 作比较，将变量大的值赋值给变量 c
    
    int a = 10;
    int b = 20;
    int c = 0;
    
    c = (a > b) ? a : b;
    cout << c <<endl;
    //在C++中三目运算符返回的是变量，可以继续赋值
    // (a > b ? a : b) = 100;
    // cout << a <<endl;
    // cout << b <<endl;

    (a < b ? a : b )= 200;
    cout << a <<endl;
    cout << b <<endl;
    system("pause");
    return 0;
    
}