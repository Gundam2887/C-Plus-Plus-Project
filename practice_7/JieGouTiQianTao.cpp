#include<iostream>
#include<string>
using namespace std;

//�ṹ��Ƕ�׽ṹ��

struct student
{
    string name;
    int age;
    float score;
};

struct teacher
{
    int id;
    string name;
    int age;
    struct student stu;
};



int main(){
    teacher t = {10000,"����",50};
    t.stu.name = "sda";
    t.stu.age = 20;
    t.stu.score= 59;
    cout << t.id << t.name << t.age << t.stu.name << endl;

}