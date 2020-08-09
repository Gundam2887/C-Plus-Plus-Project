#include<iostream>
#include<string>
using namespace std;

//const的使用场景

struct student{
    string name;
    int age;
    float score;
};

//将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本
void printStudentS(const student *s){

    //s->age = 100; 加入const之后，一旦又修改的操作就会报错，可以防止误操作
    cout <<s->name << " " << s->age << " " << s->score << endl;

}

int main(){
    student s = {"张三",10,100};

    //通过函数打印结构体变量信息
    printStudentS(&s);
}