#include<iostream>
#include<string>
using namespace std;

//�ṹ������������
//1��ֵ����
//2����ַ����
struct student
{
    string name;
    int age;
    float score;
};

//1
void printStudent(student s){
    cout << s.name << " " << s.age << " " << s.score << endl;
}

//2
void printStudent2(student * p){
     cout << p->name << " " << p->age << " " << p->score << endl;
}

int main(){
    student s;
    s.name = "name";
    s.age = 20;
    s.score = 59;

    printStudent(s);
    printStudent2(&s);
    //cout << s.name << s.age << s.score;
}