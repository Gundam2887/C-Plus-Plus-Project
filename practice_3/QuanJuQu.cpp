#include<iostream>
using namespace std;

//总结：
//全局区中有：全局变量、静态变量、常量（字符串常量、全局常量）
//不在全局区的有：局部变量、局部常量



//全局变量
int g_a = 10;
int g_b = 10;

//const 修饰的全局变量，全局常量
const int c_g_a = 10;
const int c_g_b = 10;
int main(){

    //全局区

    //全局变量、静态变量、常量


    //创建普通局部变量
    int a = 10;
    int b = 10;

    //局部变量
    cout << &a << endl;
    cout << &b << endl;

    //全局变量
    cout << &g_a << endl;
    cout << &g_b << endl;

    //静态变量 在普通变量的前面加 static 就是静态变量
    static int s_a = 10;
    static int s_b = 10;

    //静态变量
    cout << &s_a << endl;
    cout << &s_b << endl;

    //常量
    //字符串常量
    cout << &"hello world" << endl;

    //const修饰变量
    //const修饰的全局变量，const修饰的局部变量
    cout << "全局常量" << &c_g_a<<endl;
    cout << "全局常量" << &c_g_b<<endl;

    const int c_l_a = 10;
    const int c_l_b = 10;

    cout << "局部常量" << &c_l_a<<endl;
    cout << "局部常量" << &c_l_b<<endl;
}