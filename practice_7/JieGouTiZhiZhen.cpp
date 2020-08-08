#include<iostream>
#include<string>
using namespace std;

//结构体指针

//定义结构体
struct student{
    string name;
    int age;
    float score;
};


int main(){
    //创建学生结构体变量
    student s = {"张三",10,100};

    //通过指针指向结构体变量
    student * p = &s;

    //通过指针访问结构体变量中的数据
    cout << p->name << p->age << p->score << endl;

}