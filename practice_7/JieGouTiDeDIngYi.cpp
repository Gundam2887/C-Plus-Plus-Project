#include<iostream>
#include<string>
using namespace std;

//结构体是用户自定义的数据类型，允许用户存储不同的数据类型
//语法:
//struct 结构体名 {结构体成员列表}



struct Student
{
    string name;
    int age;
    double score;
}s3;//顺便创建结构体变量

//1、struct student s1
//2、struct student s2 = {....}
//3、在定义结构体时顺便创建结构体变量
int main(){
    //使用时 struct 可以省略
    struct Student s1;
    //给s1属性赋值，通过 . 访问结构体变量中的属性
    s1.name = "张山";
    s1.age = 18;
    s1.score = 99.9;
    cout << s1.name << " " << s1.score << " " <<  s1.age << endl;

    struct Student s2 = { "张三",19,98.8 };
    cout << s2.name << " " << s2.score << " " <<  s2.age << endl;

    s3.name = "李四";
    s3.age = 17;
    s3.score = 88.8;
    cout << s3.name << " " << s3.score << " " <<  s3.age << endl;

}