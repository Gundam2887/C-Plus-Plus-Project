#include<iostream>
using namespace std;

//函数语法：
/*
返回值类型 函数名 (参数列表){
    函数体语句
    return 表达式
}
*/

//实现一个加法函数，传入两个数据，计算数据相加的结果，并且返回

double add(double num1,double num2){
    double sum = 0;
    sum = num1 + num2;
    return sum;
}

int main(){
    cout << add(100,99.9) << endl;

}