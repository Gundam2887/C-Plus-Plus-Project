#include<iostream>
using namespace std;

//封装的意义

//设计一个圆类，求圆的周长
//圆公式：2 * PI * r

const double PI = 3.14;

class Circle{
    //访问权限
    //公共权限
public:

    //属性
    //半径
    int r;

    //行为
    //获取圆的周长
    double calculateZC(){
        return 2 * PI * r;
    }
};

int main(){

    //通过圆类 创建具体的圆（对象）
    Circle cl;
    //给圆对象的属性进行赋值
    cl.r = 10;

    cout << cl.calculateZC() << endl;

}