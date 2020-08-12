#include<iostream>
using namespace std;

//函数重载
//函数名可以相同，提高复用性
//满足条件：
//1、同一个作用域下
//2、函数名相同
//3、函数参数 类型不同 或者 个数不同 或者顺序不同
//PS：函数的返回值不可以作为函数重载的条件

void func(){
    cout << "a" << endl;
}

void func(int a){
    cout << "a!" << endl;
}

void func(double a) {
    cout << "a!!" << endl;
}

void func(double a , int b) {
    cout << "a!!!" << endl;
}

void func(int a , double b) {
    cout << "a!!!!" << endl;
}
// int func(int a , double b) {
//     cout << "a!!!!" << endl;
// }

int main(){
    int a = 10;
    func(a);
    func(1.11);
}