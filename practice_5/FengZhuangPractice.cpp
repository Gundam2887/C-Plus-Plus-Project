#include<iostream>
#include<string>
using namespace std;

//设计一个学术类，属性有姓名和学号
//可以给姓名和学号赋值，可以显示学生的姓名和学号

class student{
    //类中的属性和行为 我们统一称为成员
    //属性 成员属性 成员变量
    //行为 成员函数 成员方法

public:
    //姓名
    string name;
    //学号
    string studentId;

    //显示姓名和学号
    void showStudent(){
        cout << name << " " << studentId << endl;
    }
    
    void setName(string n){
        name = n;
    }
    void setId(string id){
        studentId = id;
    }
};


int main(){
    student s1;
    s1.name = "asdas";
    s1.studentId = "s123213";

    s1.showStudent();

    student s2;
    s2.setName("nmsl");
    s2.setId("321312");

    s2.showStudent();

    student s3;
    cin >> s3.name;
    cin >> s3.studentId;

    s3.showStudent();

}