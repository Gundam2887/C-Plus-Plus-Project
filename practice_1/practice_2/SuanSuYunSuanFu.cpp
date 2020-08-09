#include<iostream>
using namespace std;

int main(){
    //四则运算
    //除数不能为0

    int a = 10;
    int b = 3;

    cout << a + b <<endl;
    cout << a - b <<endl;
    cout << a * b <<endl;
    cout << a / b <<endl;

    //取模运算
    //两个小数不可以做取模运算
    int c = 10;
    int d = 4;

    cout << c % d <<endl;

    int e = 20;

    cout << c % e <<endl;//10


    //递增递减运算符

    //前置

    int f = 10;
    ++f;
    cout << f << endl;
    //后置
    int g = 10;
    g++;
    cout << g << endl;
    //前置与后置的区别
    //前置递增 先让变量 递增  然后进行表达式运算
    int h = 10 ;
    int i = ++h * 10;
    cout << h <<endl;
    cout << i <<endl;

    //后置递增 先进行表达式运算 之后再让变量 递增
    int h2 = 10 ;
    int i2 = h2++ * 10;
    cout << h2 <<endl; 
    cout << i2 <<endl;

    system("pause");
    return 0;
}