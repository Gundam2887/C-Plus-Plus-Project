#include<iostream>
//用C++风格字符串要包含这个头文件
#include<string>
using namespace std;

int main(){
    //C风格字符串
    //char 字符串名 []
    char str[] = "hello";
    //C++风格字符串
    //包含这个头文件#include<string>
    string str2 = "helloWorld";

    cout << str <<endl;
    cout << str2 <<endl;

}