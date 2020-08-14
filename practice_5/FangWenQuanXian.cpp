#include<iostream>
using namespace std;

//访问权限
//1、public     公共权限    类内可以访问 类外可以访问
//2、protected  保护权限    类内可以访问 类外不可以访问 子类可以访问父类
//3、private    私有权限    类内可以访问 类外不可以访问 子类不可以访问父类

class person
{
public:
    string name;

protected:
    string car;

private:
    string passwork;

public:
    void func(){
        name = "zs";
        car = "bm";
        passwork = "wdnmd";
    }
};

int main(){
    person p1;

    p1.name = "ls";
    //p1.car = "bsj";//保护权限在类外访问不到
    //p1.passwork = "kljas";//私有权限的内容在类外访问不到
}