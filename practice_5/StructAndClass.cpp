#include<iostream>
using namespace std;

//struct 和 class 的区别
//唯一的区别在于默认的访问权限不同
//struct 默认权限为公共 pubilc
//class 默认权限为私有 private

class c1{
    int a = 10;
};

struct s1{
    int a = 10;
};
int main(){
    c1 c;
    //c.a;//私有权限不可访问
    s1 s;
    s.a;//公共权限可以访问
}