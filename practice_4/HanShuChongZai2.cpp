#include<iostream>
using namespace std;

//函数重制的注意事项
//1、引用作为重载的条件
void func (int& a)//int &a = a;合法 int &a = 10；不合法
{
    cout << "a" << endl; 
}

void func (const int& a)//const int a = 10;合法
{
    cout << "a!!" << endl; 
}
//2、函数重载碰到默认参数
void func2(int b , int c = 10){
    cout << "b" << endl;
}

void func2(int b){
    cout << "b" << endl;
}

int main(){
    int a =10;
    func(a);

    func(10);

    //func2(a);当函数重载碰到默认参数，出现二义性，报错，尽量避免这种情况

}