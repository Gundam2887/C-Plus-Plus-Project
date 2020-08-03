#include<iostream>
using namespace std;

int main(){
//1、单精度 float 4字节 7位有效数字 
//不在数字后面f会默认为double然后再转换为float
//2、双精度 double 8字节 15~16位有效数字
//默认情况下输出一个小数，会显示6位有效数字
    float a = 3.14f;
    double b = 3.14;

    cout << a << endl << b << endl;

    //科学计数法:
    //3 * 10^2
    float c = 3e2;
    cout << c << endl;

    system("pause");
    return 0;
}