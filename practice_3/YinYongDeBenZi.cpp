#include<iostream>
using namespace std;

//引用的本质时在 C++ 内部实现一个指针常量

//发现时引用，转换为 int * const a = &a;
 void func(int& ref){
    ref = 100;//a是引用，转换为*a = 100
 }

int main(){
    int a = 10;

    //自动转换为 int * const ref = &a,指针常量是指针指向不可修改，也说明为什么引用不可更改
    int& ref = a;
    ref = 20;//内部发现ref 是引用，自动转换为 *ref = 20;

    cout << a << endl;
    cout << ref << endl;

    func(a);
    return 0;
}