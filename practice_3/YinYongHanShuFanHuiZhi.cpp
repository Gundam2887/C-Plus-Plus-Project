#include<iostream>
using namespace std;

//引用做函数的返回值
//作用：引用时可以作为函数的返回值存在
//用法：函数调用为左值
//注意：不要返回局部变量引用

// int& test1(){
//     int a = 10;//局部变量存放在四区中的 栈区
//     return a;
// }

int& test2(){
    static int a = 10;//静态变量，存放在全局区，全局区的数据在晨旭结束后系统释放
    return a;
}

int main(){
    int &ref = test2();
    cout << ref << endl;

    test2() = 1000;//如果函数的返回值时引用，这个函数可以作为左值
    cout << ref << endl;

}