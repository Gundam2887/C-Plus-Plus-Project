#include<iostream>
using namespace std;

//在C++中，函数的形参列表中的形参是可以又默认值的
//语法：返回值类型 函数名(参数 = 默认值){};

//注意事项：
//1、如果某一个位置已经有了默认参数，那么这个位置往后，都必须有默认值
//2、如果函数的声明有默认参数，函数的实现不能有默认参数
int add(int a = 1,int b = 2, int c = 3){
    return a + b + c;
}

int main(){
    cout  << add() << endl;
}