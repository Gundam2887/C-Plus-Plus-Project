#include<iostream>
using namespace std;

int main(){

    //利用sizeof求出数据类型占用内存大小
    //语法：sizeof（数据类型 或者 变量）

    short a = 10;
    cout << sizeof(short) <<endl;

    int b = 10;
    cout << sizeof(int) <<endl;

    

    system("pause");
    return 0;
}